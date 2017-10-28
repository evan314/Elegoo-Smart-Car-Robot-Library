//
//  awesomeRobot.cpp
//  
//
//
//

#include "awesomeRobot.h"
#include "Arduino.h"

awesomeRobot::awesomeRobot(){
}

void awesomeRobot::startAwesomeRobot(){
    
    pinMode(motor1, OUTPUT);
    pinMode(motor2, OUTPUT);
    pinMode(motor3, OUTPUT);
    pinMode(motor4, OUTPUT);
    
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
}

void awesomeRobot::forward(int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55);
    analogWrite(ENB, realSpeed * 2.55);
    
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, HIGH);
    
    delay(duration);
    
}

void awesomeRobot::reverse(int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55);
    analogWrite(ENB, realSpeed * 2.55);
    
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, LOW);
    
    delay(duration);
    
}

void awesomeRobot::curveRight(int radius, int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55 / radius);
    analogWrite(ENB, realSpeed * 2.55);
    
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, HIGH);
    
    delay(duration);
}

void awesomeRobot::curveLeft(int radius, int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55);
    analogWrite(ENB, realSpeed * 2.55 / radius);
    
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, HIGH);
    
    delay(duration);
    
}

void awesomeRobot::pivotRight(int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55);
    analogWrite(ENB, realSpeed * 2.55);
    
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, HIGH);
    digitalWrite(motor3, LOW);
    digitalWrite(motor4, HIGH);
    
    delay(duration);
}

void awesomeRobot::pivotLeft(int duration, int realSpeed){
    
    analogWrite(ENA, realSpeed * 2.55);
    analogWrite(ENB, realSpeed * 2.55);
    
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
    digitalWrite(motor3, HIGH);
    digitalWrite(motor4, LOW);
    
    delay(duration);
    
}

void awesomeRobot::stopBot(){
    
    digitalWrite(ENA, LOW);
    digitalWrite(ENB, LOW);
    
}


















