#include "main.h"

//create motor objects for base
Motor left_back(1);
Motor left_front(2);

Motor right_back(3);
Motor right_front(4);

//create sensor objects
ADIGyro gyro(8, .1); //the gyro, exclusively used for turning
ADIEncoder left(4, 5); //encoders used for the bulk of the calculations
ADIEncoder right(6, 7);
ADIEncoder side(3, 2);

//robot physical properties
int WHEEL_D = 4; //wheel diameter
double Sl, Sr = 5.25; //distance of left/right wheel from center
double Ss = 5;
