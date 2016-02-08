//
//  area.cpp
//  PA1
//
//  Created by Abdulrahman Alkaabi on 2/4/16.
//  Copyright © 2016 Abdulrahman Alkaabi. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"

using namespace std;
//diclaring the variables
double s = 0;
double lenA = 0;
double lenB = 0;
double lenC = 0;
double area =0;


double computeArea(const Point &a, const Point &b, const Point &c){
    
    c.distanceTo(b);
    lenA = c.distanceTo(b);
    
    a.distanceTo(c);
    lenB = a.distanceTo(c);
    
    a.distanceTo(b);
    lenC = a.distanceTo(b);

    s = (lenA)/2 + (lenB)/2 + (lenC)/2;     //formula to calculate semiperimeter of triangle
    area =sqrt(s * (s - lenA) * (s - lenB) * (s - lenC));
    
    cout << setprecision(2) << fixed;   //2 dicimal points output
    
    
   
    return area;
   
}


