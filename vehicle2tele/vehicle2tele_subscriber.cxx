
#include <algorithm>
#include <iostream>
#include <string>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  // for logging
// alternatively, to include all the standard APIs:
//  <dds/dds.hpp>
// or to include both the standard APIs and extensions:
//  <rti/rti.hpp>

#include "vehicle2tele.hpp"
#include "application.hpp"  // for command line parsing and ctrl-c

int process_status_data(dds::sub::DataReader<status_data> reader, bool* online, bool* connected){

    // Take all samples
    int count = 0;
    dds::sub::LoanedSamples<status_data> samples = reader.take(); 

    for (const auto& sample : samples) {
        if (sample.info().valid()) {
            count++;
            std::cout << "\n" << std::endl;
            std::cout << "status data: " << sample.data() << std::endl;

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
            }

            
        } else {
            std::cout << "Instance state changed to " << sample.info().state().instance_state() << std::endl;
        }
    }

    return count; 
} // The LoanedSamples destructor returns the loan


void run_subscriber_application(unsigned int domain_id){ // unsigned int sample_count

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);
    dds::sub::Subscriber subscriber(participant);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<status_data> topic(participant, "status_data");
    dds::sub::DataReader<status_data> reader(subscriber, topic);

    dds::topic::Topic<GPSlocation_data> GPS_topic(participant, "GPSlocation_data");
    dds::sub::DataReader<GPSlocation_data> GPS_reader(subscriber, GPS_topic);

    dds::topic::Topic<IMU_data> IMU_topic(participant, "IMU_data");
    dds::sub::DataReader<IMU_data> IMU_reader(subscriber, IMU_topic);

    dds::topic::Topic<other_properties_data> op_topic(participant, "other_properties_data");
    dds::sub::DataReader<other_properties_data> op_reader(subscriber, op_topic);


    // Create a ReadCondition for any data received on this reader and set a handler to process the data

    unsigned int samples_read = 0;
    bool online;
    bool connected;
   
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [reader, &samples_read, &online, &connected]() { 
            samples_read += process_status_data(reader, &online, &connected);       
        }
    );
     

    dds::sub::cond::ReadCondition GPS_read_condtion(
        GPS_reader,
        dds::sub::status::DataState::any(),
        [&GPS_reader, online]() {
            if (online) {
                dds::sub::LoanedSamples<GPSlocation_data> samples = GPS_reader.take();
                for (const auto& sample : samples) {
                    if (sample.info().valid()) {
                        std::cout << "GPS location: " << sample.data() << std::endl;
                    }
                    else {
                        std::cout << "Instance state changed to " << sample.info().state().instance_state() << std::endl;
                    }
                }
            }
        }
    );

    dds::sub::cond::ReadCondition IMU_read_condition(
        IMU_reader,
        dds::sub::status::DataState::any(),
        [&IMU_reader, connected]() {
            if (connected) {
                dds::sub::LoanedSamples<IMU_data> samples = IMU_reader.take();
                for (const auto& sample : samples) {
                    if (sample.info().valid()) {
                        if (sample.info().valid()) {
                            std::cout << "IMU data: " << sample.data() << std::endl;
                        }
                        else {
                            std::cout << "Instance state changed to " << sample.info().state().instance_state() << std::endl;
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
                            std::cout << "Instance state changed to " << sample.info().state().instance_state() << std::endl;
                        }
                    }
                }
            }
        }
    );

    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;
    waitset += GPS_read_condtion;
    waitset += IMU_read_condition;
    waitset += op_read_condition;

    while (!application::shutdown_requested) { //  && samples_read <= sample_count 

        // Run the handlers of the active conditions. Wait for up to 1 second.
        waitset.dispatch(dds::core::Duration(13));
        

    }
}

int main(int argc, char *argv[])
{

    using namespace application;

    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    try {
        //run_subscriber_application(arguments.domain_id, arguments.sample_count);
        run_subscriber_application(arguments.domain_id);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_subscriber_application(): " << ex.what()
        << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
