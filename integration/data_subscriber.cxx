
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
void run_tele_subscriber_application(unsigned int domain_id, std::atomic<bool> &ato_online, std::atomic<bool> &ato_connected);
void run_tele_publisher(unsigned int domain_id, std::atomic<bool> &ato_online, std::atomic<bool> &ato_connected);


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


    std::atomic<bool> ato_online;
    std::atomic<bool> ato_connected;


    std::thread vehicle2tele_tele(run_tele_subscriber_application, arguments.domain_id, std::ref(ato_online), std::ref(ato_connected));    
    std::thread tele2vehicle_tele(run_tele_publisher, arguments.domain_id, std::ref(ato_online), std::ref(ato_connected));
 

    vehicle2tele_tele.join();
    tele2vehicle_tele.join();
    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
