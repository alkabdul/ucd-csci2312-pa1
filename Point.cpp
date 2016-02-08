//
//  point.cpp
//  PA1
//
//  Created by Abdulrahman Alkaabi on 2/4/16.
//  Copyright © 2016 Abdulrahman Alkaabi. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(){
x = 0;
y = 0; //intialises the point to (0,0,0)
z = 0;
}


Point::Point(double a, double b, double c){
    x = a;
    y = b; //intialises the point to (a,b,c)
    z = c;
    
}
// the distructor
Point::~Point() {
    
}
// // Change the values of x, y, z
void Point::setX(double a){
    x = a;
    
}

void Point::setY(double b){
    y = b;
    
}

void Point::setZ(double c){
    
    z = c;
}
double Point::distanceTo(const Point& p1)const{
    //calculating the value between 2 points
   
    return sqrt(pow(x - p1.getX(), 2)+pow(y - p1.getY(), 2)+pow(z - p1.getZ(),2));
}

// returning x, y, z

double Point::getX() const{
    return x;
    
}

double Point::getY() const{
    return y;
}

double Point::getZ() const{
    return z;
    
}






