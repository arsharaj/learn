// Full C++ Tutorial

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <vector>
#include <numeric>
#include <cmath>
#include <ctime>

// #include "Shape.hpp"
// #include "Circle.hpp"


// Abstract class
class Shape
{
public:
    virtual double Area() = 0;
};


class Circle : public Shape
{
protected:
    double width;
public:
    Circle(double w)
    {
        width = w;
    }
    double Area() override 
    {
        return 3.14159 * pow((width / 2), 2); 
    }
};


using namespace std;

void ShowArea(Shape& shape);

int main(void)
{
    // Shape square(10.4, 20);
    Circle circle(10);
    // ShowArea(square);
    ShowArea(circle);

    return 0;
}

void ShowArea(Shape& shape)
{
    cout << "Area : " << shape.Area() << endl;
}