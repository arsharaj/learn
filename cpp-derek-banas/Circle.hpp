#include "Shape.hpp"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{
public:
    Circle();
    Circle(double width);
    ~Circle();

    double Area();
};

#include "Circle.cpp"

#endif