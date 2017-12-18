#include "Autonomous.h"
#include "CommandGroups/SimpleAuto.h"

//#include "CommandGroups/SingleCommands/Drive/AutoDriveForward.h"
//#include "CommandGroups/Turn.h"
//#include "CommandGroups/StartShooter.h"
//#include "CommandGroups/Aim.h"
//#include "CommandGroups/FeedFuel.h"

#include "CommandGroups/FinishAuto.h"

//#include "CommandGroups/DriveToGear.h"

Autonomous::Autonomous(int mode)
{
	m_AUTON_MODE = mode;

//	switch (m_AUTON_MODE) {
//	case
//	}

	//Run SimpleAuto sequence
	AddSequential(new SimpleAuto());

	//Drive to baseline, turn, aim, feed fuel
	//AddSequential(new DriveToBaseline(500));
	//AddSequential(new AutoDriveTurnLeft(75.0));
	//AddParallel(new StartShooter());
	//AddSequential(new Aim());
	//AddSequential(new FeedFuel());

	//Finish Autonomous
	AddSequential(new FinishAuto());
}
