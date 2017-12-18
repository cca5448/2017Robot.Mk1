#ifndef SUBS_FUELCOLLECTOR_H_
#define SUBS_FUELCOLLECTOR_H_

#include "WPILib.h"

class FuelCollector: public Subsystem
{
	private:
		VictorSP * collector_motor; //collector motor
	public:
		FuelCollector();
		void InitDefaultCommand();
		void StartCollector(); //turn on the collector
		void StopCollector(); //turn off the collector
		bool IsCollectorRunning(); //check if collector is running
};

#endif
