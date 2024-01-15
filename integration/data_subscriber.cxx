
#include <algorithm>
#include <iostream>
#include <thread>
#include <future>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  

#include "data.hpp"
#include "application.hpp" 

//declaration
void run_tele_subscriber_application(unsigned int domain_id, std::promise<bool> &online_value, std::promise<bool> &connected_value);
void run_tele_publisher(unsigned int domain_id, std::future<bool> &online, std::future<bool> &connected);


int main(int argc, char *argv[]){

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


    std::promise<bool> online_value;
    std::promise<bool> connected_value;
    std::future<bool> online = online_value.get_future();
    std::future<bool> connected = connected_value.get_future();


    std::thread vehicle2tele_tele_sub(run_tele_subscriber_application, arguments.domain_id, std::ref(online_value), std::ref(connected_value));    
    std::thread tele2vehicle_tele_pub(run_tele_publisher, arguments.domain_id, std::ref(online), std::ref(connected));
 

    vehicle2tele_tele_sub.join();
    tele2vehicle_tele_pub.join();
    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
