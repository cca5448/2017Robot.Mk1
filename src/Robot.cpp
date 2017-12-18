#include "WPILib.h"
#include "Robot.h"

#include "Commands/Autonomous/Autonomous.h"

//Set all the subsystems to null
OI * Robot::oi = NULL;
Aimer * Robot::aimer = NULL;
Climber * Robot::climber = NULL;
DriveBase * Robot::drivebase = NULL;
FuelCollector * Robot::fuelcollector = NULL;
FuelFeed * Robot::fuelfeed = NULL;
GearFeed * Robot::gearfeed = NULL;
Shooter * Robot::shooter = NULL;
Vision * Robot::vision = NULL;
Setup * Robot::setup = NULL;

void Robot::RobotInit(){
	//Create new objects of subsystems
	oi = new OI();
	aimer = new Aimer();
	climber = new Climber();
	drivebase = new DriveBase();
	fuelcollector = new FuelCollector();
	fuelfeed = new FuelFeed();
	gearfeed = new GearFeed();
	shooter = new Shooter();
	vision = new Vision();
	setup = new Setup();

	//other stuff
	lw = LiveWindow::GetInstance();
	autocommand = new Autonomous(0); //0 is the auton mode
	drivebase->CalibrateGyro();
}

void Robot::AutonomousInit(){
	autocommand->Start();
}

void Robot::AutonomousPeriodic(){
	Scheduler::GetInstance()->Run(); //continually run the scheduler during auton
}

void Robot::TeleopInit(){
	autocommand->Cancel();
}

void Robot::TeleopPeriodic(){
	Scheduler::GetInstance()->Run(); //continually run the scheduler during teleop
}

void Robot::TestPeriodic(){
	lw->Run(); //runs the livewindow during test
}

void Robot::DisabledPeriodic(){
	//lw->Run(); //runs the livewindow during test
}

START_ROBOT_CLASS(Robot);
