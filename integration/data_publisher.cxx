
#include <iostream>
#include <thread>
#include <future>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      
#include <rti/config/Logger.hpp>  
#include "application.hpp"  
#include "data.hpp"

//declaration
void run_vehicle_publisher_application(unsigned int domain_id, std::promise<bool> &online_value, std::promise<bool> &connected_value);
void run_vehicle_subscriber(unsigned int domain_id, std::future<bool> &online, std::future<bool> &connected);

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
    std::promise<bool> online_value;
    std::promise<bool> connected_value;
    std::future<bool> online = online_value.get_future();
    std::future<bool> connected = connected_value.get_future();

   
    std::thread vehicle2tele_vehicle_pub(run_vehicle_publisher_application, arguments.domain_id, std::ref(online_value), std::ref(connected_value));
    std::thread tele2vehicle_vehicle_sub(run_vehicle_subscriber, arguments.domain_id, std::ref(online), std::ref(connected));
    

    vehicle2tele_vehicle_pub.join();
    tele2vehicle_vehicle_sub.join();
    // Releases the memory used by the participant factory.  Optional at
    // application exit
    // Do I need to put this thing into each thread????
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
