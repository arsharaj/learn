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
#include <algorithm>

using namespace std;

vector<int> GenerateRandVect(int numOfNums, int min, int max);

int main()
{
    vector<int> vecVals = GenerateRandVect(10, 1, 50);

    sort(vecVals.begin(), vecVals.end(), [](int x, int y){return x < y; });

    vector<int> evenVecVals;

    copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [](int x){ return (x % 2) == 0;});

    for(auto val : vecVals)
        cout << val << endl;

    for(auto val : evenVecVals)
        cout << val << endl;

    int sum = 0;
    for_each(vecVals.begin(), vecVals.end(), [&](int x) {sum += x;});

    cout << "Sum : " << sum << endl;
    
    return 0;
}

vector<int> GenerateRandVect(int numOfNums, int min, int max)
{
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while(i < numOfNums)
    {
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}