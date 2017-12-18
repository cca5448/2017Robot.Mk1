#ifndef SUBS_GEARFEED_H_
#define SUBS_GEARFEED_H_

#include "WPILib.h"

class GearFeed: public Subsystem
{
	private:
		Solenoid * gear_feed; //feeder solenoid
	public:
		GearFeed();
		void InitDefaultCommand();
		void FeedGear(); //feed a gear
};

#endif