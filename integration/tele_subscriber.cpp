#include <algorithm>
#include <iostream>
#include <future>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp> 

#include "data.hpp"

int process_data(dds::sub::DataReader<status_data> status_reader, bool* online, bool* connected) {

    // Take all samples
    int count = 0;
    dds::sub::LoanedSamples<status_data> samples = status_reader.take();

    for (const auto& sample : samples) {

        if (sample.info().valid()) {
            count++;
            std::cout << "\n" << std::endl;
            std::cout << "Status data: " << sample.data() << std::endl;

            if (sample.data().online()) {

                *online = TRUE;

                if (sample.data().connected()) {
                    *connected = TRUE;
                }
                else {
                    *connected = FALSE;
                }

            }
            else {
                *online = FALSE;
                *connected = FALSE;
            }
        }
        else {
            std::cout << "Instance state changed to "
                << sample.info().state().instance_state() << std::endl;
        }
    }

    return count;
} // The LoanedSamples destructor returns the loan



void run_tele_subscriber_application(unsigned int domain_id, std::promise<bool>& online_value, std::promise<bool>& connected_value) {

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant vehicle2tele_participant(domain_id);

    dds::sub::Subscriber tele_subscriber(vehicle2tele_participant);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<status_data> status_topic(vehicle2tele_participant, "status_data");
    dds::topic::Topic<GPSlocation_data> gps_topic(vehicle2tele_participant, "GPSlocation_data");
    dds::topic::Topic<IMU_data> imu_topic(vehicle2tele_participant, "IMU_data");
    dds::topic::Topic<other_properties_data> op_topic(vehicle2tele_participant, "other_properties_data");

    // Create DataReader with default Qos
    dds::sub::DataReader<status_data> status_reader(tele_subscriber, status_topic);
    dds::sub::DataReader<GPSlocation_data> gps_reader(tele_subscriber, gps_topic);
    dds::sub::DataReader<IMU_data> imu_reader(tele_subscriber, imu_topic);
    dds::sub::DataReader<other_properties_data> op_reader(tele_subscriber, op_topic);

    // Create a ReadCondition for any data received on this reader and set a handler to process the data
    unsigned int samples_read = 0;
    bool online;
    bool connected;

    dds::sub::cond::ReadCondition status_read_condition(
        status_reader,
        dds::sub::status::DataState::any(),
        [status_reader, &samples_read, &online, &connected, domain_id]() {
            samples_read += process_data(status_reader, &online, &connected);
        }
    );

    // maybe a little bit question,,, should be set only when they are changing.... ??? I think ...
    online_value.set_value(online);
    connected_value.set_value(connected);

    dds::sub::cond::ReadCondition gps_read_condition(
        gps_reader,
        dds::sub::status::DataState::any(),
        [&gps_reader, online]() {
            if (online) {
                dds::sub::LoanedSamples<GPSlocation_data> samples = gps_reader.take();
                for (const auto& sample : samples) {
                    if (sample.info().valid()) {
                        std::cout << "GPS location: " << sample.data() << std::endl;
                    }
                    else {
                        std::cout << "Instance state changed to "
                            << sample.info().state().instance_state() << std::endl;
                    }
                }
            }
        }
    );

    dds::sub::cond::ReadCondition imu_read_condition(
        imu_reader,
        dds::sub::status::DataState::any(),
        [&imu_reader, connected]() {
            if (connected) {
                dds::sub::LoanedSamples<IMU_data> samples = imu_reader.take();
                for (const auto& sample : samples) {
                    if (sample.info().valid()) {
                        if (sample.info().valid()) {
                            std::cout << "IMU data: " << sample.data() << std::endl;
                        }
                        else {
                            std::cout << "Instance state changed to "
                                << sample.info().state().instance_state() << std::endl;
                        }
                    }
                }
            }
        }
    );

    dds::sub::cond::ReadCondition op_read_condition(
        op_reader,
        dds::sub::status::DataState::any(),
        [&op_reader, connected]() {
            if (connected) {
                dds::sub::LoanedSamples<other_properties_data> samples = op_reader.take();
                for (const auto& sample : samples) {
                    if (sample.info().valid()) {
                        if (sample.info().valid()) {
                            std::cout << "other properties: " << sample.data() << std::endl;
                        }
                        else {
                            std::cout << "Instance state changed to "
                                << sample.info().state().instance_state() << std::endl;
                        }
                    }
                }
            }
        }
    );

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;
    waitset += status_read_condition;
    waitset += gps_read_condition;
    waitset += imu_read_condition;
    waitset += op_read_condition;

    while (true) {

        // Run the handlers of the active conditions
        waitset.dispatch(dds::core::Duration(3));

    }
}