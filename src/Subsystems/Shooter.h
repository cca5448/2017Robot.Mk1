#ifndef SUBS_SHOOTER_H_
#define SUBS_SHOOTER_H_

#include "WPILib.h"

class Shooter: public Subsystem
{
	private:
		VictorSP *shooter_motor; //shooter top motor
	public:
		Shooter();
		void InitDefaultCommand();
		bool StartShooter(float speed); //turn on the shooter and return true after delay
		void StopShooter(); //turn off the shooter
		float GetShooterSpeed(); //get the shooter wheel speed
		bool IsShooterRunning(); //check if shooter is running
};

#endif
