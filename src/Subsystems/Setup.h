#ifndef SUBS_SETUP_H_
#define SUBS_SETUP_H_

#include "WPILib.h"

class Setup: public Subsystem
{
    private:
		int m_AUTON_MODE;
		double m_SHOOTER_SPEED;
		double m_FEED_SPEED;
		double m_COLL_SPEED;
	public:
		Setup();
		void InitDefaultCommand();
		int ReturnAutonMode();
		void NextAutonMode();
		void PrevAutonMode();
		double SDB_ReturnShooterSpeed();
		double SDB_ReturnFeederSpeed();
		double SDB_ReturnCollectorSpeed();
};

#endif
