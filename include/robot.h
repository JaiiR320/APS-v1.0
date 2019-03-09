#ifndef ROBOT_H
#define ROBOT_H

#include "api.h"
using namespace pros;

//create motor objects for base
extern Motor left_back;
extern Motor left_front;

extern Motor right_back;
extern Motor right_front;

//create sensor objects
extern ADIGyro gyro; //the gyro, exclusively used for turning
extern ADIEncoder left; //encoders used for the bulk of the calculations
extern ADIEncoder right;

//robot physical properties
extern int WHEEL_D;


#endif //ROBOT_H
