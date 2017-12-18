#include "WPILib.h"
#include "Commands/GearFeed/FeedGear.h"
#include "GearFeed.h"
#include "../RobotMap.h"

GearFeed::GearFeed() : Subsystem("GearFeed")
{
	gear_feed = new Solenoid(SOL_GEARFEED);
}

void GearFeed::InitDefaultCommand()
{
	//SetDefaultCommand(new FeedGear()); //default command feeds gear
}

void GearFeed::FeedGear()
{
	gear_feed->Set(true);
	frc::Wait(1);
	gear_feed->Set(false);
}
