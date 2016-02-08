// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z; //x,y,z value of point
    
public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // Three-argument constructor
    // Distructor
    ~Point();
    
    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    double distanceTo (const Point&)const;
    
    
    
    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
    
};

#endif // __POINT_H
