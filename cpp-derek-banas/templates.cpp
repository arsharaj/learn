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

template <typename T>
void Times2(T val)
{
    cout << val << " * 2 = " << val * 2 << endl;
}

template <typename T>
T Add(T val, T val2)
{
    return val + val2;
}

template <typename T>
T Max(T val, T val2)
{
    return (val > val2) ? val : val2;
}

template <typename T, typename U>
class Person
{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w)
    {
        height = h;
        weight = w;
        numOfPeople++;
    }
    void GetData()
    {
        cout << "Height : " << height << " and weight : " << weight << endl;
    }
};

template <typename T, typename U>
int Person<T,U>::numOfPeople = 0;

int main()
{
    Times2(2);
    Times2(5.3);
    cout << "5 + 4 = " << Add(5, 4) << endl;
    cout << "5.2 + 4.3 = " << Add(5.2, 4.3) << endl;
    cout << "Max(4,5) : " << Max(4, 5) << endl;
    cout << "Max('A','B') : " << Max('A', 'B') << endl;
    cout << "Max('Dog','Cat') : " << Max("Dog", "Cat") << endl;

    Person<double, double> mikeTyson(5.83, 216);
    mikeTyson.GetData();
    cout << "Number of poople : " << mikeTyson.numOfPeople << endl;

    return 0;
}