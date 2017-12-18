#include "Commands/FuelCollector/StartCollector.h"
#include "Robot.h"

StartCollector::StartCollector()
{
	Requires(Robot::fuelcollector);
}

void StartCollector::Initialize()
{
}

void StartCollector::Execute()
{
	Robot::fuelcollector->StartCollector();
	SmartDashboard::PutString("Collector Running","true");
}

bool StartCollector::IsFinished()
{
	return true;
}

void StartCollector::End()
{
}

void StartCollector::Interrupted()
{
	End();
}
