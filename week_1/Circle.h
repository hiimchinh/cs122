#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    double radius, pi = 3.14159;

public:
    Circle();

    Circle(double rad);

    void setRadius(double rad);

    double getRadius() const
    {
        return radius;
    }
    double getArea() const
    {
        return pi * radius * radius;
    }

    double getDiamemter() const
    {
        return radius * 2;
    }

    double getCircumference() const
    {
        return 2 * pi * radius;
    }
};

void useCircleClass();

#endif