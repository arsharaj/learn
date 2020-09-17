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
#include <deque>
#include <forward_list>
#include <list>

using namespace std;

int main()
{
    deque<int> deq1;
    deq1.push_back(5);
    deq1.push_back(4);
    deq1.push_front(1);
    deq1.push_front(2);
    cout << "Size : " << deq1.size() << endl;
    deq1.assign({11, 12});
    cout << "Size : " << deq1.size() << endl;

    cout << deq1[0] << endl;
    cout << deq1.at(1) << endl;
    deque<int>::iterator it = deq1.begin() + 1;
    deq1.insert(it, 3);

    int tempArr[5] = {6,7,8,9,10};
    deq1.insert(deq1.end(), tempArr, tempArr + 5);

    deq1.erase(deq1.end());
    deq1.erase(deq1.begin(), deq1.begin() + 2);

    deq1.pop_back();
    deq1.pop_front();
    deque<int> deq2(2, 50);
    deq1.swap(deq2);
    deq1.clear();

    for(auto i : deq1)
        cout << i << endl;

    int arr[5] = {1,2,3,4,5};
    list<int> list1;
    list1.insert(list1.begin(), arr, arr + 5);
    list1.assign({10,11,12});
    list1.push_back(5);
    list1.push_back(1);

    cout << list1.size() << endl;

    // cout << list1[0] << endl; // Error

    list<int>:: iterator it2 = list1.begin();
    advance(it2, 1);
    cout << *it2 << endl;


    it2 = list1.begin();
    list1.insert(it2, 8);

    list1.erase(list1.begin());
    list<int>::iterator it3 = list1.begin();
    advance(it3, 2);
    list1.erase(it2, it3);

    list1.pop_front();
    list1.pop_back();

    int arr2[6] = {10,9,8,7,6,6};
    list<int> list2;
    list2.insert(list2.begin(), arr2, arr + 5);

    list2.sort();
    list2.reverse();
    list2.unique();
    // list2.remove_if()
    list1.merge(list2);

    for(auto i : list1)
        cout << i << endl;

    return 0;
}