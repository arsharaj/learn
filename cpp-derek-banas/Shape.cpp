// Full C++ Tutorial

#include "Shape.hpp"

Shape::Shape(double length)
{
    this->height = length; // pointer operator
    this->width = length;
}

Shape::Shape(double height, double width)
{
    this->height = height;
    this->width = width;
}

Shape::~Shape() = default;

void Shape::SetHeight(double height)
{
    this->height = height;
}

double Shape::GetHeight()
{
    return this->height;
}


void Shape::SetWidth(double width)
{
    this->width = width;
}

double Shape::GetWidth()
{
    return this->width;
}

int Shape::GetNumOfShapes()
{
    return numOfShapes;
}

// Polymorphism
double Shape::Area()
{
    return height * width;
}

int Shape::numOfShapes = 0;
