#include <algorithm>
#include <iostream>
#include <future>

#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp> 

#include "data.hpp"


void run_tele_publisher_application(unsigned int domain_id, std::future<bool> &online, std::future<bool> &connected) {
	/*
	* parameter: domain_id, online, connected
	* return: nothing
	* This function is for the tele operation platform to write the control data.
	*/

	if (online.get() & connected.get()) {
		dds::domain::DomainParticipant tele2vehicle_participant(domain_id);

		dds::pub::Publisher tele_publisher(tele2vehicle_participant);

		dds::topic::Topic<control_data> control_topic(tele2vehicle_participant, "control_data");

		dds::pub::DataWriter<control_data> control_writer(tele_publisher, control_topic);

		control_data data;

		while (online.get() & connected.get()) {

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
	
}

