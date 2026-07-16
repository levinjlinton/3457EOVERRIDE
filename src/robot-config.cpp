#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Controller = controller(primary);
aivision AIVision(4, aivision::ALL_TAGS);
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

///CHANGE LATER IF NECESSARY, THIS IS JUST A PLACEHOLDER TO TEST CODE
motor LeftFront = motor(PORT1, ratio6_1, false);
motor LeftBack = motor(PORT2, ratio6_1, false);
motor RightFront = motor(PORT3, ratio6_1, true);
motor RightBack = motor(PORT4, ratio6_1, true);
motor LeftLift = motor(PORT5, ratio36_1, true);
motor RightLift = motor(PORT6, ratio36_1, false);
void vexcodeInit( void ) {
  // nothing to initialize
}