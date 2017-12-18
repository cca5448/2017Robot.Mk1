#ifndef SUBS_FUELFEED_H_
#define SUBS_FUELFEED_H_

#include "WPILib.h"

class FuelFeed: public Subsystem
{
	private:
		VictorSP *feed_motor;
	public:
		FuelFeed();
		void InitDefaultCommand();
		void StartFeedFuelRev();
		void StartFeedFuelFwd(); //start feeding fuel
		void StopFeedFuel(); //stop feeding fuel
		bool IsFeederRunning(); //check if feeder is running
};

#endif
