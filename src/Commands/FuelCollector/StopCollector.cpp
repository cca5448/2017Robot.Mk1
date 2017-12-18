#include "Commands/FuelCollector/StopCollector.h"
#include "Robot.h"

StopCollector::StopCollector()
{
	Requires(Robot::fuelcollector);
}

void StopCollector::Initialize()
{
}

void StopCollector::Execute()
{
	Robot::fuelcollector->StopCollector();
	SmartDashboard::PutString("Collector Running","false");
}

bool StopCollector::IsFinished()
{
	return true;
}

void StopCollector::End()
{
}

void StopCollector::Interrupted()
{
	End();
}
