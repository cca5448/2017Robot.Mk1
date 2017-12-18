#include "Commands/FuelFeed/StopFeeder.h"
#include "Robot.h"

StopFeeder::StopFeeder()
{
	Requires(Robot::fuelfeed); //requires the shooter subsystem
}

void StopFeeder::Initialize()
{
	SmartDashboard::PutString("Feeder Running","initfalse");
}

void StopFeeder::Execute()
{
	Robot::fuelfeed->StopFeedFuel();
	SmartDashboard::PutString("Feeder Running","false");
}

bool StopFeeder::IsFinished()
{
	return true;
}

void StopFeeder::End()
{
}

void StopFeeder::Interrupted()
{
	End();
}
