#include "AutoDriveBackwards.h"
#include "Robot.h"
#include "RobotMap.h"

AutoDriveBackwards::AutoDriveBackwards(int distance)
{
	m_TARGET_DISTANCE = distance;
	Requires(Robot::drivebase);
}

void AutoDriveBackwards::Initialize()
{
	Robot::drivebase->ResetEncoderPosition();
}

void AutoDriveBackwards::Execute()
{
	Robot::drivebase->DriveTank(AUTON_DRIVE_SPEED,-AUTON_DRIVE_SPEED);
}

bool AutoDriveBackwards::IsFinished()
{
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) <= -m_TARGET_DISTANCE);
}

void AutoDriveBackwards::End()
{
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveBackwards::Interrupted()
{
	End();
}
