
#include <algorithm>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp> 

#include "data.hpp"


void process_data(dds::sub::DataReader<control_data> control_reader) {
	/*
	* parameter: control reader
	* return: nothing
	* This function is used to take the data from the data stream.
	*/
	dds::sub::LoanedSamples<control_data> samples = control_reader.take();
	for (const auto& sample : samples) {
		if (sample.info().valid()) {
			std::cout << "\nReceiving control_data: " << sample.data() << std::endl;
		}
		else {
			std::cout << "Instance state changed to "
				<< sample.info().state().instance_state() << std::endl;
		}
	}
}


void run_vehicle_subscriber_application(unsigned int domain_id, bool start) {
	/*
	* parameter: domain_id, which is supposed to be same as vehicle2tele app.
	* return: nothing
	* This function is for the vehicle to receive the control data which 
	*	is sent from the tele operation platform.
	*/
	std::cout << "here" << std::endl;

	dds::domain::DomainParticipant tele2vehicle_participant(domain_id);

	dds::topic::Topic<control_data> control_topic(tele2vehicle_participant, "control_data");

	dds::sub::Subscriber vehicle_subscriber(tele2vehicle_participant);

	dds::sub::DataReader<control_data> control_reader(vehicle_subscriber, control_topic);

	
	// this place will have an error, because one one
	dds::sub::cond::ReadCondition read_condition(
		control_reader,
		dds::sub::status::DataState::any(),
		[control_reader]() {
			//take data.
			process_data(control_reader);
		}
	);

	std::cout << "here 2" << std::endl;

	dds::core::cond::WaitSet waitset;
	waitset += read_condition;

	while (start) {
		std::cout << "waiting to receive data ..." << std::endl;
		waitset.dispatch(dds::core::Duration(8));
	}
}


void vehicle_subscriber(unsigned int domain_id, bool start) {
	/*
	* parameter: domain_id, which is introduced from the other thread
	* return: nothing
	* This function acts as an interface for vehicle to receive the control data.
	*/

	if (start) {
		std::cout << "\nconnected: " << start << std::endl;

		try {
			run_vehicle_subscriber_application(domain_id, start);
		}
		catch (const std::exception& ex) {
			//This will catch DDS exceptions
			std::cerr << "Exception in run_subscriber_application(): " << ex.what()
				<< std::endl;
		}
	}
	else {
		std::cout << "\n vehicle subscriber is not being invoked." << std::endl;
		// Releases the memory used by the participant factory.
		dds::domain::DomainParticipant::finalize_participant_factory();
	}
}
