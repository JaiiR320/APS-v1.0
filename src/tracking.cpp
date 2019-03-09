#include "main.h"

double d0, thetaR, theta0 = 0;
double currentTheta = 0;
double deltaL, deltaR, deltaS;

double prevL, prevR, prevS = 0;
double currentL, currentR, currentS;

void tracking(){
  currentL = left.get_value();
  currentR = right.get_value();
  currentS = side.get_value();

  deltaL = 12.566 * (currentL - prevL)/360;
  deltaR = 12.566 * (currentR - prevR)/360; //delta in inches
  deltaS = 12.566 * (currentS - prevS)/360;

  prevL = currentL;
  prevR = currentR;
  prevS = currentS;

  currentTheta = 1;

}
