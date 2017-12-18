#include <WPILib.h>
#include "Setup.h"
#include "../RobotMap.h"


Setup::Setup() : Subsystem("Setup")
{
	m_AUTON_MODE = 0;
	m_SHOOTER_SPEED = 0;
	m_FEED_SPEED = 0;
	m_COLL_SPEED = 0;
}

void Setup::InitDefaultCommand()
{
	SmartDashboard::PutNumber("Auton Mode",m_AUTON_MODE);
}

int Setup::ReturnAutonMode()
{
	return m_AUTON_MODE;
}

void Setup::PrevAutonMode()
{
	if (m_AUTON_MODE >= AUTON_MODE_MAX) {
		m_AUTON_MODE = AUTON_MODE_MAX;
	} else {
		m_AUTON_MODE--;
	}
	SmartDashboard::PutNumber("Auton Mode",m_AUTON_MODE);
}

void Setup::NextAutonMode()
{
	if (m_AUTON_MODE <= 0) {
		m_AUTON_MODE = 0;
	} else {
		m_AUTON_MODE++;
	}
	SmartDashboard::PutNumber("Auton Mode",m_AUTON_MODE);
}

double Setup::SDB_ReturnShooterSpeed()
{
	m_SHOOTER_SPEED = SmartDashboard::GetNumber(SDB_SHOOTER_SPEED_CTRL_ID,0.0);
	if (m_SHOOTER_SPEED > 1.0) {
		return 1.0;
	} else if (m_SHOOTER_SPEED == 0) {
		SmartDashboard::PutNumber(SDB_SHOOTER_SPEED_CTRL_ID,MOT_SHOOTER_SPEED_DEF);
		return MOT_SHOOTER_SPEED_DEF;
	} else {
		return m_SHOOTER_SPEED;
	}
}

double Setup::SDB_ReturnFeederSpeed()
{
	m_FEED_SPEED = SmartDashboard::GetNumber(SDB_FEED_SPEED_CTRL_ID,0.0);
	if (m_FEED_SPEED > 1.0) {
		return 1.0;
	} else if (m_FEED_SPEED == 0) {
		SmartDashboard::PutNumber(SDB_FEED_SPEED_CTRL_ID,MOT_FEED_SPEED_DEF);
		return MOT_FEED_SPEED_DEF;
	} else {
		return m_FEED_SPEED;
	}
}

double Setup::SDB_ReturnCollectorSpeed()
{
	m_COLL_SPEED = SmartDashboard::GetNumber(SDB_COLL_SPEED_CTRL_ID,0.0);
	if (m_COLL_SPEED > 1.0) {
		return 1.0;
	} else if (m_COLL_SPEED == 0) {
		SmartDashboard::PutNumber(SDB_COLL_SPEED_CTRL_ID,MOT_COLL_SPEED_DEF);
		return MOT_COLL_SPEED_DEF;
	} else {
		return m_COLL_SPEED;
	}
}
