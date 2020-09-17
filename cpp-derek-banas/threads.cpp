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
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

int GetRandom(int max)
{
    srand(time(NULL));
    return (rand() % max);
}

void ExecuteThread(int id)
{
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);
    cout << "Thread : " << id << " Sleep time : " << ctime(&sleepTime) << endl;
    cout << "Month : " << myLocalTime.tm_mon << endl;
    cout << "Day : " << myLocalTime.tm_mday << endl;
    cout << "Year : " << myLocalTime.tm_year + 1900 << endl;
    cout << "Hours : " << myLocalTime.tm_hour << endl;
    cout << "Min : " << myLocalTime.tm_min << endl;
    cout << "Sec : " << myLocalTime.tm_sec << endl;
    this_thread::sleep_for(chrono::seconds(GetRandom(3)));
    nowTime = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(nowTime);
    sleepTime = chrono::system_clock::to_time_t(nowTime);
    cout << "Thread : " << id << " Awake time : " << ctime(&sleepTime) << endl;
}

int main()
{
    thread th1 (ExecuteThread, 1);
    th1.join();

    thread th2(ExecuteThread, 2);
    th2.join();
    return 0;
}