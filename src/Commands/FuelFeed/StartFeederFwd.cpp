#include "Commands/FuelFeed/StartFeederFwd.h"
#include "Robot.h"

StartFeederFwd::StartFeederFwd()
{
	Requires(Robot::fuelfeed);
}

void StartFeederFwd::Initialize()
{
//	SmartDashboard::PutString("Feeder Running","initfwd");
}

void StartFeederFwd::Execute()
{
	Robot::fuelfeed->StartFeedFuelFwd();
	SmartDashboard::PutString("Feeder Running","fwd");
}

bool StartFeederFwd::IsFinished()
{
	return true;
}

void StartFeederFwd::End()
{
}

void StartFeederFwd::Interrupted()
{
	End();
}
