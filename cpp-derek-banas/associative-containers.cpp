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

using namespace std;

int main()
{
    set<int> set1 {5,4,3,2,1,1,1,1};
    cout << "Size : " << set1.size() << endl;

    set1.insert(0);
    set<int>::iterator it1 = set1.begin();
    it1++;
    cout << "2nd : " << *it1 << endl;
    set1.erase(5);
    it1 = set1.end();
    advance(it1, -2);
    set1.erase(it1, set1.end());

    int arr[] = {6,7,8,9};
    set1.insert(arr, arr+4);

    auto val = set1.find(6);
    cout << "Found " << *val << endl;

    auto eight = set1.lower_bound(8);
    cout << "8 " << *eight << endl;

    auto nine = set1.upper_bound(9);
    cout << "9 " << *nine << endl;

    set<int> set2 {10,11};
    set1.swap(set2);

    for(auto i : set1)
        cout << i << endl;

    multiset<int> mset1 {1,2,3,2,4};
    mset1.insert(4);
    mset1.insert(0);
    if(!mset1.empty())
    {
        for(int i : mset1)
            cout << i << endl;
    }

    map<int, string> map1;
    map1.insert(pair<int,string> (1, "Arsharaj"));
    map1.insert(pair<int,string> (2, "Lisa"));
    map1.insert(pair<int,string> (3, "Chuck"));
    map1.insert(pair<int,string> (4, "Adam"));
    
    auto match = map1.find(1);
    cout << match->second << endl;

    auto bart = map1.lower_bound(1);
    cout << "LB " << bart->second << endl;

    auto lisa = map1.upper_bound(1);
    cout << "UB " << lisa->second << endl;

    map<int, string>::iterator it2;
    for(it2 = map1.begin(); it2 != map1.end(); it2++)
    {
        cout << "Key " << it2->first << endl;
        cout << "Value " << it2->second << endl;
    }

    return 0;

}