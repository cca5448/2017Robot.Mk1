#include "WPILib.h"
#include "VictorSP.h"
//#include "Commands/Shooter/StartShooter.h"
#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() : Subsystem("Shooter")
{
	//SmartDashboard::PutString("Shooter Speed",std::to_string(Robot::setup->SDB_ReturnShooterSpeed()));
	shooter_motor = new VictorSP(MOT_SHOOTER);
}

void Shooter::InitDefaultCommand()
{
	//SetDefaultCommand();
}

bool Shooter::StartShooter(float speed)
{
	//shooter_motor->Set(speed);
	SmartDashboard::PutBoolean(SDB_SHOOTER_LED_ID,true);
	//shooter_motor->Set(Robot::setup->SDB_ReturnShooterSpeed());
	shooter_motor->Set(MOT_SHOOTER_SPEED_DEF);
	return true;  //return true when shooter has started
}

void Shooter::StopShooter()
{
	SmartDashboard::PutBoolean(SDB_SHOOTER_LED_ID,false);
	shooter_motor->StopMotor(); //stop top shooter wheel
}

float Shooter::GetShooterSpeed()
{
	//This just gets the value we set the controller to, no encoders.
	return shooter_motor->Get();
}


bool Shooter::IsShooterRunning()
{
	if (shooter_motor->Get() > 0 ) return true;
	return false;
}
