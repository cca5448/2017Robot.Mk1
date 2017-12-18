#include "WPILib.h"
//#include "Commands/Aimer/Aim.h"
#include "Aimer.h"
#include "../RobotMap.h"

Aimer::Aimer() : Subsystem("Aimer")
{
}

void Aimer::InitDefaultCommand()
{
	//SetDefaultCommand(new Aim());
}

void Aimer::Aim()
{
	//Do some auto-aiming stuff
}
