## CSCI 2312: Programming Assignment 1

_working with objects_
in this program a 3D triangle is calculated.

## The 3D point class:

## private:
    double x, y, z; 
  ## public:
    // Constructors
    Point();                      
    Point(double x, double y, double z);
   
   // Distructor
    ~Point();

    ## // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    double distanceTo (const Point&)const;
    
    

   ## // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const; 
    
      ## compiler: 
      mac Xcode

