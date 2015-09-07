// A 3-dimensional point class
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point
{
private:
    double x;
    double y;
    double z;
    double ans;

public:
  // Constructors
  Point();                                 // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

  // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

  // distanceTo function to approximate the distance between two points
    double distanceTo(const Point &);

};

#endif // __point_h