
#include <algorithm>
#include <iostream>
#include <future>

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


void run_vehicle_subscriber_application(unsigned int domain_id) {
	/*
	* parameter: domain_id, which is supposed to be same as vehicle2tele app.
	*			 online: true or false; connected: true or false.
	* return: nothing
	* This function is for the vehicle to receive the control data which 
	*	is sent from the tele operation platform.
	*/
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

	dds::core::cond::WaitSet waitset;
	waitset += read_condition;

	while (true) {
		std::cout << "waiting to receive data ..." << std::endl;
		waitset.dispatch(dds::core::Duration(3));
	}
}

void run_vehicle_subscriber(unsigned int domain_id, std::future<bool> &online, std::future<bool> &connected) {
	if (online.get() && connected.get()) {
		run_vehicle_subscriber_application(domain_id);
	}
}

