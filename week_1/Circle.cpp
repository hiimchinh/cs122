#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
    radius = 0;
}

Circle::Circle(double rad)
{
    radius = rad;
}

void Circle::setRadius(double rad)
{
    while (rad < 0)
    {
        cout << "The circle radius cannot be smaller than zero. Try again: ";
        cin >> rad;
    }
    radius = rad;
}

void useCircleClass()
{
    Circle globe;
    cout << "Input the radius of the globe: ";
    double radius;
    cin >> radius;
    globe.setRadius(radius);
    cout << "Radius of the globe is: " << globe.getRadius() << endl;
    cout << "Area of the globe is: " << globe.getArea() << endl;
    cout << "Diameter of the globe is: " << globe.getDiamemter() << endl;
    cout << "Circumference of the globe is: " << globe.getCircumference() << endl;
}