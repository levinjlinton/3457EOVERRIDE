#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Controller = controller(primary);
aivision AIVision(6, aivision::ALL_TAGS);
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

///CHANGE LATER IF NECESSARY, THIS IS JUST A PLACEHOLDER TO TEST CODE
motor LeftFront = motor(PORT1, ratio6_1, false);
motor LeftBack = motor(PORT2, ratio6_1, false);
motor RightFront = motor(PORT3, ratio6_1, true);
motor RightBack = motor(PORT4, ratio6_1, true);
motor LeftLift = motor(PORT20, ratio18_1, true);
motor RightLift = motor(PORT19, ratio18_1, false);
motor_group dihtrain = motor_group(LeftFront, LeftBack, RightFront, RightBack);
motor_group Lift = motor_group(LeftLift, RightLift);
motor Claw = motor(PORT10, ratio18_1, false);//idk if it is actually false
PID LiftPID = PID(0,1,0,0.5,0);
double target = 0;
rotation liftRot = rotation(PORT7);
bool usingLiftTarget = false;
bool ClawToggled = true;
double A = 180;
double B = 360;
double C = 630;

void vexcodeInit( void ) {
  // nothing to initialize  
}