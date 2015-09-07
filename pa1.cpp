//
//
//
// This program will compute the area of a three-dimensional triangle.

#include <iostream>
#include "Point.h"
#include <cmath>
#include <iomanip>

using namespace std;

double computeArea(Point &, Point &, Point &);

int main(void)
{
    double x, y, z, area;

    cout << "Welcome! This program can compute the area of a three-dimensional triangle." << endl;

                Point a, b, c;

                // User enters the nine coordinates of the three-dimensional triangle

                cout << "Please enter the x value for the first point in your triangle" << endl;
                cin >> x;
                a.setX(x);

                cout << "Please enter the y value for the first point in your triangle" << endl;
                cin >> y;
                a.setY(y);

                cout << "Please enter the z value for the first point in your triangle" << endl;
                cin >> z;
                a.setZ(z);

                cout << "Your first point's coordinates are: " << a.getX() << ", " << a.getY() << ", " << a.getZ() << endl;

                cout << "Please enter the x value for the second point in your triangle" << endl;
                cin >> x;
                b.setX(x);

                cout << "Please enter the y value for the second point in your triangle" << endl;
                cin >> y;
                b.setY(y);

                cout << "Please enter the z value for the second point in your triangle" << endl;
                cin >> z;
                b.setZ(z);

                cout << "Your second point's coordinates are: " << b.getX() << ", " << b.getY() << ", " << b.getZ() << endl;

                cout << "Please enter the x value for the third point in your triangle" << endl;
                cin >> x;
                c.setX(x);

                cout << "Please enter the y value for the third point in your triangle" << endl;
                cin >> y;
                c.setY(y);

                cout << "Please enter the z value for the third point in your triangle" << endl;
                cin >> z;
                c.setZ(z);

                cout << "Your third point's coordinates are: " << c.getX() << ", " << c.getY() << ", " << c.getZ() << endl;

                // Area is computed from these coordinates

                area = computeArea(a, b, c);

                cout << setprecision(2) << fixed << showpoint << "\nThe area of your triangle is: " << area << endl;

    return 0;
}

double computeArea(Point & a, Point & b, Point & c)
{
    double area, a1, b1, c1, s;

    // Call to member function distanceTo to find the length of each side of the triangle

    a1 = a.distanceTo(b);

    b1 = b.distanceTo(c);

    c1 = c.distanceTo(a);

    // Heron's formula

    s = (a1 + b1 + c1)/2;

    area = sqrt(s*(s-a1)*(s-b1)*(s-c1));

    return area;
}