#include <algorithm>
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp> 

#include "data.hpp"


void run_tele_publisher_application(unsigned int domain_id, bool start) {
	/*
	* parameter: domain_id
	* return: nothing
	* This function is for the tele operation platform to write the control data.
	*/

	dds::domain::DomainParticipant vehicle2tele_participant(domain_id);
	
	dds::pub::Publisher tele_publisher(vehicle2tele_participant);

	dds::topic::Topic<control_data> control_topic(vehicle2tele_participant, "control_data");

	dds::pub::DataWriter<control_data> control_writer(tele_publisher, control_topic);

	control_data data;

	while (start) {

		data.acceleration(100.0);
		data.brake(100.0);
		data.steering(100.0);
		data.gear(100);
		data.additional_button1(1);
		data.additional_button2(2);
		data.additional_button3(3);

		std::cout << "\nWriting control_data: " << data << std::endl;

		control_writer.write(data);

		// Send once every 10 seconds
		rti::util::sleep(dds::core::Duration(2));
	}
}

void tele_publisher(unsigned int domain_id, bool start) {
	/*
	* parameter: domain_id
	* return: exit_failure or exit_success
	* This function is for the tele operation platform to .... run....
	*/

	if (start) {
		std::cout << "\nconnected: " << start << std::endl;

		try {
			run_tele_publisher_application(domain_id, start);
		}
		catch (const std::exception& ex) {
			std::cerr << "Exception in run_tele_publisher_application(): " << ex.what()
				<< std::endl;
		}
	}
	else {
		std::cout << "tele publisher is not being invoked..." << std::endl;
		dds::domain::DomainParticipant::finalize_participant_factory();
	}
}