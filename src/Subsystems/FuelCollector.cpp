#include "WPILib.h"
#include "VictorSP.h"
//#include "Commands/FuelCollector/StartCollector.h"
//#include "Commands/FuelCollector/StopCollector.h"
#include "FuelCollector.h"
#include "../RobotMap.h"

FuelCollector::FuelCollector() : Subsystem("FuelCollector")
{
	//SmartDashboard::PutString("Collector Speed",std::to_string(Robot::setup->SDB_ReturnCollectorSpeed()));
	collector_motor = new VictorSP(MOT_COLL);
}

void FuelCollector::InitDefaultCommand()
{
	//SetDefaultCommand(new StartCollector()); //default command starts collector
}

void FuelCollector::StartCollector()
{
	SmartDashboard::PutBoolean(SDB_COLL_LED_ID,true);
	//collector_motor->Set(Robot::setup->SDB_ReturnCollectorSpeed());
	if (IsCollectorRunning()) {
		collector_motor->Set(-MOT_COLL_SPEED_DEF);
	} else {
		collector_motor->Set(MOT_COLL_SPEED_DEF);
	}
}

void FuelCollector::StopCollector()
{
	SmartDashboard::PutBoolean(SDB_COLL_LED_ID,false);
	collector_motor->StopMotor();
}

bool FuelCollector::IsCollectorRunning()
{
	if (collector_motor->Get() > 0) return true;
	return false;
}
