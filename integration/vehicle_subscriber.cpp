
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


void run_vehicle_subscriber_application(unsigned int domain_id, std::atomic<bool>& online, std::atomic<bool>& connected) {
	/*
	* parameter: domain_id, which is supposed to be same as vehicle2tele app.
	*			 online: true or false; connected: true or false.
	* return: nothing
	* This function is for the vehicle to receive the control data which 
	*	is sent from the tele operation platform.
	*/
	dds::domain::DomainParticipant vehicle_participant(domain_id);

	dds::sub::Subscriber vehicle_subscriber(vehicle_participant);

	dds::topic::Topic<control_data> control_topic(vehicle_participant, "control_data");

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

	while (online.load() & connected.load()) {
		std::cout << "\nwaiting to receive data:" << std::endl;
		waitset.dispatch(dds::core::Duration(3));
	}
}

void run_vehicle_subscriber(unsigned int domain_id, std::atomic<bool>& ato_online, std::atomic<bool>& ato_connected) {
	while (true) {
		//std::cout << online.load() << connected.load() << std::endl;
		if (ato_online.load() && ato_connected.load()) {
			run_vehicle_subscriber_application(domain_id, std::ref(ato_online), std::ref(ato_connected));
		}
	}
	
}

