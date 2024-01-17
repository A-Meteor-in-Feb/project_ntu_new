
#include <iostream>
#include <thread>
#include <future>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      
#include <rti/config/Logger.hpp>  
#include "application.hpp"  
#include "data.hpp"

//declaration
void run_vehicle_publisher_application(unsigned int domain_id, std::atomic<bool>& ato_online, std::atomic<bool>& ato_connected);
void run_vehicle_subscriber(unsigned int domain_id, std::atomic<bool>& ato_online, std::atomic<bool>& ato_connected);

int main(int argc, char* argv[]) {

    using namespace application;

    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    }
    else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    //The variables for judging whether the second thread should start executing.
    std::atomic<bool> ato_online;
    std::atomic<bool> ato_connected;

   
    std::thread vehicle2tele_vehicle(run_vehicle_publisher_application, arguments.domain_id, std::ref(ato_online), std::ref(ato_connected));
    std::thread tele2vehicle_vehicle(run_vehicle_subscriber, arguments.domain_id, std::ref(ato_online), std::ref(ato_connected));
    
   
    vehicle2tele_vehicle.join();
    tele2vehicle_vehicle.join();
    // Releases the memory used by the participant factory.  Optional at
    // application exit
    // Do I need to put this thing into each thread????
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
