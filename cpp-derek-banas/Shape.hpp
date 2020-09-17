// Header file for the shape class
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
// Accessible in the class and the next inherited object
protected:  
    double height;
    double width;

// Accessible everywhere
public:
    static int numOfShapes; // Shares the value between all class;
    // constructor
    Shape(); 
    Shape(double length);
    Shape(double height, double width);

    // de-constructor or destructor
    virtual ~Shape();

    // Getters and setters
    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double width);
    double GetWidth();
    
    static int GetNumOfShapes();
    virtual double Area();

// Accessible only within the class
private:
};

#include "Shape.cpp"

#endif /* Shape_H */