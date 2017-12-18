//#include "Commands/FuelFeed/FeedFuel.h"
#include "WPILib.h"
#include "VictorSP.h"
#include "FuelFeed.h"
#include "../RobotMap.h"

FuelFeed::FuelFeed() : Subsystem("FuelFeed")
{
	//SmartDashboard::PutString("Feeder Speed",std::to_string(Robot::setup->SDB_ReturnFeederSpeed()));
	feed_motor = new VictorSP(MOT_FUEL_FEED);
}

void FuelFeed::InitDefaultCommand()
{
	//SetDefaultCommand(); //default command feeds fuel to shooter
}

void FuelFeed::StartFeedFuelFwd()
{
	SmartDashboard::PutBoolean(SDB_FEED_LED_ID,true);
	//feed_motor->Set(Robot::setup->SDB_ReturnFeederSpeed());

	//if (!Robot::shooter->IsShooterRunning()) {
		//Robot::shooter->StartShooter(MOT_SHOOTER_SPEED_DEF);
		//frc::Wait(1);
	//}
	if (IsFeederRunning() && feed_motor->Get() >= 128) {
		feed_motor->Set(MOT_FEED_SPEED_DEF);
	} else {
		feed_motor->Set(-MOT_FEED_SPEED_DEF);
	}
}

void FuelFeed::StartFeedFuelRev()
{
	SmartDashboard::PutBoolean(SDB_FEED_LED_ID,true);
	//feed_motor->Set(-Robot::setup->SDB_ReturnFeederSpeed());
	//if (!Robot::shooter->IsShooterRunning()) {
		//Robot::shooter->StartShooter(MOT_SHOOTER_SPEED_DEF);
		//frc::Wait(1);
	//}
	if (IsFeederRunning()) {
		feed_motor->Set(-MOT_FEED_SPEED_DEF);
	} else {
		feed_motor->Set(MOT_FEED_SPEED_DEF);
	}
}

void FuelFeed::StopFeedFuel()
{
	SmartDashboard::PutBoolean(SDB_FEED_LED_ID,false);
	feed_motor->StopMotor(); //stop feed motor
}

bool FuelFeed::IsFeederRunning()
{
	if (feed_motor->Get() > 0 ) return true;
	return false;
}
