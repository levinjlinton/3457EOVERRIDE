#include "JAR-Template/PID.h"

using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern controller Controller;
extern aivision AIVision;
extern motor LeftFront;
extern motor LeftBack;
extern motor RightFront;
extern motor RightBack;
extern motor LeftLift;
extern motor RightLift;
extern motor_group Lift;
extern PID LiftPID;
extern motor Claw;
extern double target;
extern bool usingLiftTarget;
extern bool ClawToggled;
extern rotation liftRot;
extern motor_group dihtrain;
extern double A;
extern double B;
extern double C;

void  vexcodeInit( void );