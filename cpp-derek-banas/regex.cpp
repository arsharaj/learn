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
#include <regex>

using namespace std;

int main()
{
    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]?");
    smatch matches;

    if(regex_search(str, matches, reg) == true)
    {
        cout << matches.size() << " Matches" << endl;
        while(regex_search(str, matches, reg))
        {
            cout << matches.str(1) << endl;
            cout << "At index : " << matches.position(1) << endl;
            str = matches.suffix().str();
        }
    }

    return 0;
}