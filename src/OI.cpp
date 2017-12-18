#include "OI.h"
#include "RobotMap.h"
//#include "Commands/GearFeed/FeedGear.h"
#include "Commands/Shooter/StartShooter.h"
#include "Commands/Shooter/StopShooter.h"
#include "Commands/FuelFeed/StartFeederFwd.h"
#include "Commands/FuelFeed/StartFeederRev.h"
#include "Commands/FuelFeed/StopFeeder.h"
#include "Commands/FuelCollector/StartCollector.h"
#include "Commands/FuelCollector/StopCollector.h"
//#include "Commands/Setup/NextAuton.h"
//#include "Commands/Setup/PrevAuton.h"
//#include "Commands/FuelFeed/FeedFuel.h"
//#include "Commands/FuelFeed/AutoFeedFuel.h"
//#include "Commands/Aiming/AimAssist.h"
//#include "Commands/Shooter/SimultaneousAimShoot.h"

	//feed_gear->ToggleWhenPressed(new FeedGear()); //Feeds a gear
	//feed_fuel->ToggleWhenPressed(new FeedFuel()); //Feeds a fuel
	//toggle_fuel_auto->ToggleWhenPressed(new AutoFeedFuel()); //Toggles auto fuel feeding
	//aim_assist->WhileHeld(new AimAssist()); //Aim Assists
	//auton_next->ToggleWhenPressed(new AutonNext()); //Next Auton Mode
	//auton_prev->ToggleWhenPressed(new AutonPrev()); //Prev Auton Mode
	//aim_and_shoot->ToggleWhenPressed(new SimultaneousAimShoot());

//array for the controller dead zone this makes it slightly ramp up at it gets to the working zone
const char inputShape[255] = {
0,1,3,4,5,6,7,9,10,11,12,13,15,16,17,18,19,21,22,23,24,25,27,28,29,30,31,
33,34,35,36,37,38,40,41,42,43,44,46,47,48,49,50,52,53,54,55,56,58,59,60,61,
62,64,65,66,67,68,70,71,72,73,74,76,77,78,79,80,82,83,84,85,86,88,89,90,91,
92,94,95,96,97,98,98,99,99,100,101,102,103,104,105,106,107,108,109,110,111,
111,113,113,115,115,116,116,117,117,118,118,119,119,120,120,121,121,122,122,
123,123,124,124,125,125,126,126,127,127,
127,127,128,128,129,129,130,130,131,131,132,132,133,133,134,134,135,135,136,
136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,
155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,
174,175,176,177,178,179,179,180,181,182,183,184,186,187,188,189,190,192,193,
194,195,196,198,199,200,201,202,204,205,206,207,208,210,211,212,213,214,216,
217,218,219,220,221,223,224,225,226,227,229,230,231,232,233,235,236,237,238,
239,241,242,243,244,245,247,248,249,250,251,253,254,255};

//create deadzone for axis
float DeadZone(float uVal)
{
	//if (uVal >= -JOYSTICK_DEADZONE && uVal <= JOYSTICK_DEADZONE) {
	//	return 0.0;
	//}
	//return uVal;
	if (uVal >= -JOYSTICK_DEADZONE && uVal <= JOYSTICK_DEADZONE) {
		return 0.0;
	}
	return uVal;
}

float InputShape(float userValue)
{
	double iUserValue;
	iUserValue = (double)userValue * 127;
	iUserValue += 127;
	//iUserValue = inputShape[iUserValue];
	SmartDashboard::PutNumber("iUserValue",iUserValue);
	userValue = iUserValue - 127;
	userValue /= 127;
	return userValue;
}

OI::OI()
{
	//constants are from RobotMap.h
	//joysticks
	driver_stick_l = new Joystick(JOY_DRIVE_L);
	driver_stick_r = new Joystick(JOY_DRIVE_R);
	oper_stick = new Joystick(JOY_OPER);

	//buttons to control bot
	shooter_start = new JoystickButton(oper_stick,BTN_SHOOTER_START);
	shooter_stop = new JoystickButton(oper_stick,BTN_SHOOTER_STOP);
	collector_start = new JoystickButton(oper_stick, BTN_COLLECTOR_START);
	collector_stop = new JoystickButton(oper_stick, BTN_COLLECTOR_STOP);
	feeder_fwd = new JoystickButton(oper_stick,BTN_FEEDER_FWD);
	feeder_rev = new JoystickButton(oper_stick,BTN_FEEDER_REV);
	feeder_stop = new JoystickButton(oper_stick,BTN_FEEDER_STOP);
	//feed_gear = new JoystickButton(oper_stick,JOY_OPR_GEAR_FEED);
	//feed_fuel = new JoystickButton(oper_stick,JOY_OPR_FUEL_FEED);
	//toggle_fuel_auto = new JoystickButton(oper_stick,JOY_OPR_FUEL_AUTO);
	//aim_assist = new JoystickButton(oper_stick,JOY_OPR_AIM_ASSIST);
	auton_next = new JoystickButton(oper_stick,BTN_AUTON_NEXT);
	auton_prev = new JoystickButton(oper_stick,BTN_AUTON_PREV);
	//aim_and_shoot = new JoystickButton(oper_stick,JOY_OPR_AIM_SHOOT);

	//what to do when buttons pushed
	shooter_start->ToggleWhenPressed(new StartShooter());
	shooter_stop->ToggleWhenPressed(new StopShooter());
	collector_start->ToggleWhenPressed(new StartCollector());
	collector_stop->ToggleWhenPressed(new StopCollector());
	feeder_fwd->ToggleWhenPressed(new StartFeederFwd());
	feeder_rev->ToggleWhenPressed(new StartFeederRev());
	feeder_stop->ToggleWhenPressed(new StopFeeder());
	//feed_gear->ToggleWhenPressed(new FeedGear()); //Feeds a gear
	//feed_fuel->ToggleWhenPressed(new FeedFuel()); //Feeds a fuel
	//toggle_fuel_auto->ToggleWhenPressed(new AutoFeedFuel()); //Toggles auto fuel feeding
	//aim_assist->WhileHeld(new AimAssist()); //Aim Assists
	//auton_next->ToggleWhenPressed(new NextAuton()); //Next Auton Mode
	//auton_prev->ToggleWhenPressed(new PrevAuton()); //Prev Auton Mode
	//aim_and_shoot->ToggleWhenPressed(new SimultaneousAimShoot());
}

//method will return the drive axis
double OI::GetDriveAxis(bool left){

	float m_right = DeadZone(driver_stick_r->GetRawAxis(JOY_DRV_AXIS_R));
	SmartDashboard::PutNumber("Right",m_right);
	float m_left = DeadZone(driver_stick_l->GetRawAxis(JOY_DRV_AXIS_L));
	SmartDashboard::PutNumber("Left",m_left);

	if(left){
		return -(InputShape(DeadZone(driver_stick_l->GetRawAxis(JOY_DRV_AXIS_L))));
	} else {
		return -(InputShape(DeadZone(driver_stick_r->GetRawAxis(JOY_DRV_AXIS_R))));
	}
}
//left = OI::GetDriveAxis(true)  // returns non-inverted value of left joystick
//right = OI::GetDriveAxis(false)  //returns inverted value of right joystick

