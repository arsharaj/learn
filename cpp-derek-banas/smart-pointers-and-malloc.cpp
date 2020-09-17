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
#include <deque>
#include <iterator>
#include <memory>
#include <cstdio>

using namespace std;

int main()
{
    int amtToStore;
    cout << "How many numbers do you want : ";
    cin >> amtToStore;

    unique_ptr<int[]> pNums(new int[amtToStore]);
    if(pNums != NULL)
    {
        int i = 0;
        while(i < amtToStore)
        {
            cout << "Enter the number : ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered these numbers : ";
    for(int i = 0; i < amtToStore; i++)
    {
        cout << pNums[i] << endl;
    }

    // int * pNums;
    // pNums = (int*) malloc (amtToStore * sizeof(int));
    // if(pNums != NULL)
    // {
    //     int i = 0;
    //     while(i < amtToStore)
    //     {
    //         cout << "Enter a number : ";
    //         cin >> pNums[i];
    //         i++;
    //     }
    // }
    // cout << "You entered these numbers : ";
    // for(int i = 0; i < amtToStore; i++)
    // {
    //     cout << pNums[i] << endl;
    // }
    // delete pNums;
    return 0;
}