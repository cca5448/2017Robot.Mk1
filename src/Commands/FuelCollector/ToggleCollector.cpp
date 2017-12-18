#include "Commands/FuelCollector/ToggleCollector.h"
#include "Robot.h"

ToggleCollector::ToggleCollector()
{
	Requires(Robot::fuelcollector);
}

void ToggleCollector::Initialize()
{
}

void ToggleCollector::Execute()
{
	if (Robot::fuelcollector->IsCollectorRunning()) {
		Robot::fuelcollector->StopCollector();
		SmartDashboard::PutString("Collector Running","false");
	} else {
		Robot::fuelcollector->StartCollector();
		SmartDashboard::PutString("Collector Running","true");
	}
}

bool ToggleCollector::IsFinished()
{
	return true;
}

void ToggleCollector::End()
{
}

void ToggleCollector::Interrupted()
{
	End();
}
