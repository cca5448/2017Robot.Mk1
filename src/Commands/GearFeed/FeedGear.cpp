#include "Commands/GearFeed/FeedGear.h"
#include "Robot.h"

FeedGear::FeedGear()
{
	Requires(Robot::gearfeed);
}

void FeedGear::Initialize()
{
}

void FeedGear::Execute()
{
	Robot::gearfeed->FeedGear();
}

bool FeedGear::IsFinished()
{
	return true;
}

void FeedGear::End()
{
	Robot::gearfeed->FeedGear();
}

void FeedGear::Interrupted()
{
	End();
}