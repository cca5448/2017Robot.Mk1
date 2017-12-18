#ifndef MAIN_ROBOT_H_
#define MAIN_ROBOT_H_

#include "WPILib.h"
#include "CANTalon.h"
#include "VictorSP.h"

#include "OI.h"
#include "Subsystems/Aimer.h"
#include "Subsystems/Climber.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/FuelCollector.h"
#include "Subsystems/FuelFeed.h"
#include "Subsystems/GearFeed.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Vision.h"
#include "Subsystems/Setup.h"

class Robot: public IterativeRobot
{
	public:
		//create static objects of the subsystems
		static OI * oi;
		static Aimer * aimer;
		static Climber * climber;
		static DriveBase * drivebase;
		static FuelCollector * fuelcollector;
		static FuelFeed * fuelfeed;
		static GearFeed * gearfeed;
		static Shooter * shooter;
		static Vision * vision;
		static Setup * setup;

	private:
		LiveWindow * lw;
		Command * autocommand;
		void RobotInit();
		void AutonomousInit();
		void AutonomousPeriodic();
		void TeleopInit();
		void TeleopPeriodic();
		void TestPeriodic();
		void DisabledPeriodic();
};

#endif
