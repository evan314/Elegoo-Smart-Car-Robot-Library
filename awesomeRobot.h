//
//  awesomeRobot.hpp
//  
//
//  Created by Evan Johnson on 10/27/17.
//
//

#ifndef awesomeRobot_h
#define awesomeRobot_h

#include "Arduino.h"

class awesomeRobot
{
public:
    
    awesomeRobot();
    
    void startAwesomeRobot();
    void forward(int duration, int realSpeed);
    void reverse(int duration, int realSpeed);
    void curveRight(int radius, int duration, int realSpeed);
    void curveLeft(int radius, int duration, int realSpeed);
    void pivotRight(int duration, int realSpeed);
    void pivotLeft(int duration, int realSpeed);
    void stopBot();
    
    int motor1 = 6;
    int motor2 = 7;
    int motor3 = 8;
    int motor4 = 9;
    
    int ENA = 5;
    int ENB = 11;
    
};

#endif /* awesomeRobot_h */
