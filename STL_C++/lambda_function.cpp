#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    cout<< [](int x, int y){return x+y;}(4, 7)<< endl;
    auto sum = [](int x, int y){return x+y;};
    cout<< sum(2,3) << endl;

    vector<int> v = {2,3,4};
    cout<< all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl; // all_of checks if every element satisfy the condition or not and returns a bool true or false(1 or 0).
    cout<< any_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl; // any_of checks if any element satisfy the condition or not and returns a bool true or false(1 or 0).
    cout<< none_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl; // noen_of checks if every element dissatisfy the condition or not and returns a bool true or false(1 or 0).

return 0;
}