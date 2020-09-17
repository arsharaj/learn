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

using namespace std;

struct Shape
{
    double length, width;
    Shape(double l = 1, double w = 1)
    {
        length = l;
        width = w;
    }
    double Area()
    {
        return length * width;
    }

private:
    int id;
};

struct Circle : Shape
{
    Circle(double width)
    {
        this->width = width;
    }
    double Area()
    {
        return 3.14159 * pow((width / 2), 2);
    }
};

int main()
{
    Shape shape(10,10);
    cout << "Square Area : " << shape.Area() << endl;

    Circle circle(10);
    cout << "Circle Area : " << circle.Area() << endl;

    Shape rect{10, 15};
    cout << "Rectangle Area : " << rect.Area() << endl;

    return 0;
}