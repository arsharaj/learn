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
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1;
    fl1.assign({1,2,3,4});
    fl1.push_front(0);
    fl1.pop_front();
    cout << "Front : " << fl1.front() << endl;
    forward_list<int>::iterator it4 = fl1.begin();
    it4 = fl1.insert_after(it4, 5);
    fl1.emplace_front(6);
    fl1.remove(6);
    forward_list<int> fl2;
    fl2.assign({9,8,7,6,6});
    fl2.unique();
    fl2.sort();
    fl2.reverse();
    fl1.merge(fl2);
    

    for(auto x : fl1)
        cout << x << endl;

    return 0;
}