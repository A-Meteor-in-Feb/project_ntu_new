
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging
// alternatively, to include all the standard APIs:
//  <dds/dds.hpp>
// or to include both the standard APIs and extensions:
//  <rti/rti.hpp>

#include "application.hpp"  // for command line parsing and ctrl-c
#include "vehicle2tele.hpp"


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

            /* open/ run another app
            if (*connected != TRUE) {
                system("start D://codes/hahaha/version05/tele2vehicle & objs/x64Win64VS2017/tele2vehicle_publisher.exe -d 0 -s 10");
                system("start D://codes/hahaha/version05/tele2vehicle & objs/x64Win64VS2017/tele2vehicle_subscriber.exe -d 0 -s 10");
            }*/
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

void run_publisher_application(unsigned int domain_id){// , unsigned int sample_count

    std::string vin = "vehicle" + std::to_string(domain_id);
    bool online;
    bool connected;
    basic_properties(&online, &connected);

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<status_data> status_topic(participant, "status_data");
    dds::topic::Topic<GPSlocation_data> GPS_topic(participant, "GPSlocation_data");
    dds::topic::Topic<IMU_data> IMU_topic(participant, "IMU_data");
    dds::topic::Topic<other_properties_data> op_topic(participant, "other_properties_data");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter<status_data> status_writer(publisher, status_topic);
    dds::pub::DataWriter<GPSlocation_data> GPS_writer(publisher, GPS_topic);
    dds::pub::DataWriter<IMU_data> IMU_writer(publisher, IMU_topic);
    dds::pub::DataWriter<other_properties_data> op_writer(publisher, op_topic);
    
    status_data status_data;
    GPSlocation_data GPS_data;
    IMU_data IMU_data;
    other_properties_data op_data;

    unsigned int samples_written = 0;
    // Main loop, write data
    /*
    for (unsigned int samples_written = 0;
         !application::shutdown_requested && samples_written < sample_count;
         samples_written++) */
    while(!application::shutdown_requested)
    {   
        samples_written++;

        std::cout << "\n" << std::endl;

        status_data.vin(vin);
        status_data.online(online);
        status_data.connected(connected);

        std::cout << "Writing status_data: " << status_data << std::endl;

        status_writer.write(status_data);
        
        // writer writes the data, and do judgement on the reader side.
        // if we have the corresponding data, then just write, if not, just skip.
        // how to judge whether there are these data being transmitted in ???

        if (online) {
            GPS_data.vin(vin);
            GPS_data.altitude(100.0);
            GPS_data.latitude(100.0);
            GPS_data.longitude(100.0);

            std::cout << "Writing GPS_data: " << GPS_data << std::endl;

            GPS_writer.write(GPS_data);
        }
        
        if (connected) {

            IMU_data.vin(vin);
            IMU_data.angular_velocity({ 100.0, 101.0, 102.0 });
            IMU_data.linear_acceleration({ 100.0, 101.0, 102.0 });
            IMU_data.quaternion({ 100.0, 101.0, 102.0, 103.0 });

            op_data.vin(vin);
            op_data.speed(100.0);
            op_data.steering_position(100.0);
            op_data.gear(100);
            op_data.indicators(100);

            std::cout << "Writing IMU_data: " << IMU_data << std::endl;
            std::cout << "Writing other_properties_data: " << op_data << std::endl;

            IMU_writer.write(IMU_data);
            op_writer.write(op_data);


        }

        // Send once every 10 seconds
        rti::util::sleep(dds::core::Duration(10)); 
        
        //simulation of changing states.
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
        //run_publisher_application(arguments.domain_id, arguments.sample_count);
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
