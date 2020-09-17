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
#include <functional>

using namespace std;

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main()
{
    cout << "Circle Area : " << AREA_CIRCLE(5) << endl;
    return 0;
}