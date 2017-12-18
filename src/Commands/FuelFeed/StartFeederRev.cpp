#include "Commands/FuelFeed/StartFeederRev.h"
#include "Robot.h"

StartFeederRev::StartFeederRev()
{
	Requires(Robot::fuelfeed);
}

void StartFeederRev::Initialize()
{
//	SmartDashboard::PutString("Feeder Running","initrev");
}

void StartFeederRev::Execute()
{
	Robot::fuelfeed->StartFeedFuelRev();
	SmartDashboard::PutString("Feeder Running","rev");
}

bool StartFeederRev::IsFinished()
{
	return true;
}

void StartFeederRev::End()
{
}

void StartFeederRev::Interrupted()
{
	End();
}
