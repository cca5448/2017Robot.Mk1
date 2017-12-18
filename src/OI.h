#ifndef MAIN_OI_H_
#define MAIN_OI_H_

#include "WPILib.h"

class OI
{
	public:
		OI();
		double GetDriveAxis(bool left); //returns the axis to drive the robot
	private:
		//create joystick objects
		Joystick * driver_stick_l; //driver joystick left
		Joystick * driver_stick_r; //driver joystick right
		Joystick * oper_stick; //operator joystick

		//create buttons for control
		JoystickButton * shooter_start; //ejects a gear
		JoystickButton * shooter_stop; //ejects a gear
		JoystickButton * collector_start;
		JoystickButton * collector_stop;
		JoystickButton * feeder_fwd;
		JoystickButton * feeder_rev;
		JoystickButton * feeder_stop;
		//JoystickButton * feed_gear;
		//JoystickButton * feed_fuel; //feeds a fuel to the shooter
		//JoystickButton * toggle_fuel_auto; //toggles auto fuel feeding
		//JoystickButton * aim_assist; //start aim assist
		JoystickButton * auton_next; //switch to next auton
		JoystickButton * auton_prev; //switch to prev auton
		//JoystickButton * aim_and_shoot; //aim and shoot simultaneous
};

#endif
