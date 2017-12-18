/*
* RobotMap defines motor and sensor ports and buttons/axis for the robot.
* This is for ease of use and to abstract the functions from the io names
*/

#ifndef ROBOTMAP_H_
#define ROBOTMAP_H_

//Robot Constants for decision making
static const float GYRO_KP = 0.03;
const unsigned short AUTON_MODE_MAX = 3;
const float AUTON_DRIVE_SPEED = 0.25; //speed to drive in auton mode
const float AUTON_TURN_SPEED = 0.25;
const float JOYSTICK_DEADZONE = 0.10;

//Gyro Code http://first.wpi.edu/FRC/roborio/release/docs/cpp/classfrc_1_1ADXRS450__Gyro.html

//CAN IDs - DriveBase
const unsigned short MOT_DRV_LF			= 2; //Speed Controller 1 is Left Front
const unsigned short MOT_DRV_LR			= 1; //Speed Controller 2 is Left Rear
const unsigned short MOT_DRV_RF			= 3; //Speed Controller 3 is Right Front
const unsigned short MOT_DRV_RR			= 4; //Speed Controller 4 is Right Rear

//Collector Motors
const unsigned short MOT_COLL			= 0; //PWM Pin for Collector Motor controller
const float MOT_COLL_SPEED_DEF				= 0.55; //Speed of collector motor
const std::string SDB_COLL_SPEED_CTRL_ID	= "DB/Slider 3";
const std::string SDB_COLL_BTN_ID			= "DB/Button 3";
const std::string SDB_COLL_LED_ID			= "DB/LED 3";

//Shooter Motors
const unsigned short MOT_SHOOTER		= 1; //PWM Pin for Shooter Top Motor
const float MOT_SHOOTER_SPEED_DEF			= 0.81; //Speed of shooter motor
const std::string SDB_SHOOTER_SPEED_CTRL_ID	= "DB/Slider 0"; //speed slider
const std::string SDB_SHOOTER_BTN_ID		= "DB/Button 0"; //shooter button
const std::string SDB_SHOOTER_LED_ID		= "DB/LED 0"; //shooter led

//feeder motors
const unsigned short MOT_FUEL_FEED		= 3; //PWM Pin for Fuel Feed Motor
const unsigned short MOT_FEED_SPEED_DEF		= 1.0; //Speed of Fuel Feeder
const std::string SDB_FEED_SPEED_CTRL_ID = "DB/Slider 1"; //Dashboard ID of Fuel Feeder button and led
const std::string SDB_FEED_BTN_ID		= "DB/Button 1";
const std::string SDB_FEED_LED_ID		= "DB/LED 1";

//climber Motors
const unsigned short MOT_CLIMB		= 4; //PWM Pin for Climber
const unsigned short MOT_CLIMB_SPEED_DEF		= 1.0; //Speed of Climber
const std::string SDB_CLIMB_SPEED_CTRL_ID = "DB/Slider 2"; //Dashboard ID of Climberbutton and led
const std::string SDB_CLIMB_BTN_ID		= "DB/Button 2";
const std::string SDB_CLIMB_LED_ID		= "DB/LED 2";

//Joysticks
const unsigned short JOY_DRIVE_L		= 0; //USB Port Driver Joystick left
const unsigned short JOY_DRIVE_R		= 1; //USB Port DRiver Joystick right
const unsigned short JOY_OPER			= 1; //USB Port for Operator Joystick

//Sensors
const unsigned short GYRO_1				= 0; //SPI Port for Gyro 1

const unsigned short FUEL_FEED_SENSE	= 0; //Digital Pin for Fuel Feeder Sensor (to stop shooter when hopper empty)
const unsigned short FUEL_COLL_SENSE	= 1; //Digital Pin for Fuel Collector Sensor (to start fuel collector)

//Solenoids
const unsigned short SOL_GEARFEED		= 2; //Digital Pin for Gear Feed Solenoid
const unsigned short SOL_FUELFEED		= 3; //Digital Pin for Fuel Feed Solenoid

//Driver Stick
const unsigned short JOY_DRV_AXIS_L		= 1; //Axis for Left Tank Drive
const unsigned short JOY_DRV_AXIS_R		= 1; //Axis for Right Tank Drive

//Buttons on oper stick
const unsigned short BTN_COLLECTOR_TOG	= 3; //toggle collector
const unsigned short BTN_COLLECTOR_START = 5; //start collector
const unsigned short BTN_COLLECTOR_STOP = 6; //stop collector
const unsigned short BTN_SHOOTER_START  = 4; //start shooter
const unsigned short BTN_SHOOTER_STOP	= 3; //stop shooter
const unsigned short BTN_FEEDER_FWD		= 1; //forward feeder
const unsigned short BTN_FEEDER_REV		= 2; //reverse feeder
const unsigned short BTN_FEEDER_STOP	= 7; //stop feeder
const unsigned short BTN_CLIMB_FWD		= 1; //forward climber
const unsigned short BTN_CLIMB_REV		= 2; //reverse climber
const unsigned short BTN_CLIMB_STOP		= 7; //stop climber
//const unsigned short BTN_AIM_ASSIST		= 6; //start vision aim assist
//const unsigned short BTN_FUEL_FEED	= 2; //Button for Fuel Feed Single
//const unsigned short BTN_FUEL_AUTO	= 3; //Button for Fuel Feed Toggle Auto
const unsigned short BTN_AUTON_1 = 1; //Auton 1
const unsigned short BTN_AUTON_2 = 2; //Auton 2
const unsigned short BTN_AUTON_3 = 3; //Auton 3
const unsigned short BTN_AUTON_4 = 4; //Auton 4
const unsigned short BTN_AUTON_5 = 5; //Auton 5
const unsigned short BTN_AUTON_NEXT	= 7; //Button for Auton Next
const unsigned short BTN_AUTON_PREV	= 6; //Button for Auton Prev

#endif
