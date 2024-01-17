#include <algorithm>
#include <iostream>
#include <future>

#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp> 

#include "data.hpp"


void basic_properties(bool& online, bool& connected) {
    std::string str_online;
    std::string str_connected;

    std::cout << "online ? (y/n)" << std::endl;
    std::getline(std::cin, str_online);

    if (str_online == "y") {
        online = TRUE;

        std::cout << "connected ? (y/n)" << std::endl;
        std::getline(std::cin, str_connected);

        if (str_connected == "y") {
            connected = TRUE;
        }
        else {
            connected = FALSE;
        }
    }
    else {
        online = FALSE;
        connected = FALSE;
    }
}

void run_vehicle_publisher_application(unsigned int domain_id, std::atomic<bool>& ato_online, std::atomic<bool>& ato_connected) {

    std::string vin = "vehicle" + std::to_string(domain_id);

    bool online;
    bool connected;
    basic_properties(online, connected);

    bool online_record;
    bool connected_record;
    online_record = online;
    connected_record = connected;

    ato_online = online;
    ato_connected = connected;

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant vehicle_participant(domain_id);

    // Create a Publisher
    dds::pub::Publisher vehicle_publisher(vehicle_participant);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<status_data> status_topic(vehicle_participant, "status_data");
    dds::topic::Topic<GPSlocation_data> gps_topic(vehicle_participant, "GPSlocation_data");
    dds::topic::Topic<IMU_data> imu_topic(vehicle_participant, "IMU_data");
    dds::topic::Topic<other_properties_data> op_topic(vehicle_participant, "other_properties_data");

    // Create a DataWriter with default QoS
    dds::pub::DataWriter<status_data> status_writer(vehicle_publisher, status_topic);
    dds::pub::DataWriter<GPSlocation_data> gps_writer(vehicle_publisher, gps_topic);
    dds::pub::DataWriter<IMU_data> imu_writer(vehicle_publisher, imu_topic);
    dds::pub::DataWriter<other_properties_data> op_writer(vehicle_publisher, op_topic);

    status_data status_data;
    GPSlocation_data gps_data;
    IMU_data imu_data;
    other_properties_data op_data;

    unsigned int samples_written = 0;

    // Main loop, write data
    while (true) {

        samples_written++;

        std::cout << "\n" << std::endl;

        status_data.vin(vin);
        status_data.online(online);
        status_data.connected(connected);

        std::cout << "Writting status_data: " << status_data << std::endl;

        status_writer.write(status_data);

        if (online) {
            gps_data.vin(vin);
            gps_data.altitude(100.0);
            gps_data.latitude(100.0);
            gps_data.longitude(100.0);

            std::cout << "Writing GPS_data: " << gps_data << std::endl;

            gps_writer.write(gps_data);
        }

        if (connected) {
            imu_data.vin(vin);
            imu_data.angular_velocity({ 100.0, 101.0, 102.0 });
            imu_data.linear_acceleration({ 100.0, 101.0, 102.0 });
            imu_data.quaternion({ 100.0, 101.0, 102.0, 103.0 });

            op_data.vin(vin);
            op_data.speed(100.0);
            op_data.steering_position(100.0);
            op_data.gear(100);
            op_data.indicators(100);

            std::cout << "Writing IMU_data: " << imu_data << std::endl;
            std::cout << "Writing other_properties_data" << op_data << std::endl;

            imu_writer.write(imu_data);
            op_writer.write(op_data);

        }

        // Send once every 2 seconds
        rti::util::sleep(dds::core::Duration(2));

        if (samples_written % 5 == 0) {
            std::string str_change;

            std::cout << "change status ? (y/n)" << std::endl;
            std::getline(std::cin, str_change);

            if (str_change == "y") {
                basic_properties(online, connected);

                if (online != online_record) {
                    ato_online = online;
                    online_record = online;
                }
                if (connected != connected_record) {
                    ato_connected = connected;
                    connected_record = connected;
                }
            }
        }

    }
}