#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int main()
{
    vector<string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)//we can use auto instead of this (vector<string>::iterator).
    {
        cout << *it << endl; //iterator is a ponter.
    }

    return 0;
}