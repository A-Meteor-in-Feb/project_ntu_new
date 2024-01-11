
#include <iostream>
#include <thread>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      
#include <rti/config/Logger.hpp>  
#include "application.hpp"  
#include "data.hpp"

//declaration, related functions are in the file vehicle_subscriber.cpp.
void vehicle_subscriber(unsigned int domain_id, bool start);


void basic_properties(bool* online, bool* connected) {
    std::string str_online;
    std::string str_connected;

    std::cout << "online ? (y/n)" << std::endl;
    std::getline(std::cin, str_online);

    if (str_online == "y") {
        *online = TRUE;

        std::cout << "connected ? (y/n)" << std::endl;
        std::getline(std::cin, str_connected);
        
        if (str_connected == "y") {
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



void run_publisher_application(unsigned int domain_id){

    std::string vin = "vehicle" + std::to_string(domain_id);

    bool online;
    bool connected;

    basic_properties(&online, &connected);


    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant vehicle2tele_participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<status_data> status_topic(vehicle2tele_participant, "status_data");
    dds::topic::Topic<GPSlocation_data> gps_topic(vehicle2tele_participant, "GPSlocation_data");
    dds::topic::Topic<IMU_data> imu_topic(vehicle2tele_participant, "IMU_data");
    dds::topic::Topic<other_properties_data> op_topic(vehicle2tele_participant, "other_properties_data");

    // Create a Publisher
    dds::pub::Publisher vehicle_publisher(vehicle2tele_participant);

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

    std::thread tele2vehicle_vehicle_start;
    bool start = FALSE;

    // Main loop, write data
    while(!application::shutdown_requested){

        std::cout << "\nhere 3" << std::endl;

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


            // another thread to make the vehicle perform as a subscriber to receive control data sent by tele.
            if (!start) {
                start = TRUE;
                std::thread tele2vehicle_vehicle_start(vehicle_subscriber, domain_id, std::ref(start));
            }

        }
        else {

            if (start) {
                start = FALSE;
                std::thread tele2vehicle_vehicle_stop(std::move(tele2vehicle_vehicle_start));
            }
        }

        // Send once every 10 seconds
        rti::util::sleep(dds::core::Duration(5));

        if (samples_written % 5 == 0) {
            std::string str_change;
            std::cout << "change properties - online/connected ? (y/n)" << std::endl;
            std::getline(std::cin, str_change);
            if (str_change == "y") {
                basic_properties(&online, &connected);
            }
        }
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
        run_publisher_application(arguments.domain_id);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_publisher_application(): " << ex.what()
        << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
