// Full C++ Tutorial

#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <functional>
#include <list>
#include <forward_list>
#include <deque>
#include <ctime>
#include <cstdio>
#include <limits>
#include <numeric>
#include <memory>
#include <functional>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <random>
#include <thread>
#include <mutex>
#include <chrono>
#include <set>
#include <map>
#include <stack>

using namespace std;

int main()
{
    stack<string> custs;
    custs.push("George");
    custs.push("Lisa");
    custs.push("Adaa");
    custs.push("Mike");

    cout << "Size " << custs.size() << endl;

    while(!custs.empty())
    {
        cout << custs.top() << endl;
        custs.pop();
    }


    queue<string> cast;
    cast.push("Lisa");
    cast.push("Adam");
    cast.push("Mike");
    cout << "Size " << cast.size() << endl;

    while(!cast.empty())
    {
        cout << cast.front() << endl;
        cast.pop();
    }

    priority_queue<int> nums;
    nums.push(8);
    nums.push(9);
    nums.push(10);
    cout << "Size " << nums.size() << endl;

    while(!nums.empty())
    {
        cout << nums.top() << endl;
        nums.pop();
    }

    enum day {Mon = 1, Tue, Wed, Thur, Fri , Sat, Sun};
    enum day tuesday = Tue;
    cout << "Tuesday is the " << tuesday << "nd day of the week" << endl;

    for(int i = Mon; i <= Sun; i++)
    {
        cout << i << endl;
    }

    return 0;
}