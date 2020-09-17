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

using namespace std;

int main()
{
    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);
    nums.push_back(5);
    for(auto x : nums)
        cout << x << endl;
    cout << nums[0] << endl;

    vector<int> nums2 = {1,2,3,4};
    vector<int>::iterator itr;
    for(itr = nums2.begin(); itr < nums2.end(); itr++)
    {
        cout << *itr << endl;
    }

    vector<int>:: iterator itr2 = nums2.begin();
    advance(itr2, 2);
    cout << *itr2 << endl;

    auto itr3 = next(itr2, 1);
    cout << *itr3 << endl;

    auto itr4 = prev(itr3, 1);
    cout << *itr4 << endl;

    vector<int> nums3 = {1, 4, 5, 6};
    vector<int> nums4 = {2, 3};
    vector<int>::iterator itr5 = nums3.begin();
    advance(itr5, 1);
    copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));
    for(auto &i : nums3)
        cout << i << endl;

    return 0;
}