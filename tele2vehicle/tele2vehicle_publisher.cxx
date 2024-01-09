
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging
// alternatively, to include all the standard APIs:
//  <dds/dds.hpp>
// or to include both the standard APIs and extensions:
//  <rti/rti.hpp>

#include "application.hpp"  // for command line parsing and ctrl-c
#include "tele2vehicle.hpp"

void run_publisher_application(unsigned int domain_id, unsigned int sample_count){
   
    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic<control_data> topic(participant, "control_data");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter<control_data> writer(publisher, topic);

    control_data data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
         !application::shutdown_requested && samples_written < sample_count;
         samples_written++) 
    {
        // Modify the data to be written here
        // This data should be transmitted when connected, use one of the QoS configuration, i forget right now... you should find it.
        // or maybe you can use other methods.......
        data.acceleration(100.0);
        data.brake(100.0);
        data.steering(100.0);
        data.gear(100);
        data.additional_button1(static_cast<int32_t>(samples_written));
        data.additional_button2(static_cast<int32_t>(samples_written));
        data.additional_button3(static_cast<int32_t>(samples_written));

        std::cout << "Writing control_data: " << data << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(10));
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
        run_publisher_application(arguments.domain_id, arguments.sample_count);
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
