#include <iostream>
using namespace std;
int main ()
{
    pair<int, string> p;
    // p = make_pair(2, "abc"); first way of making a pair.
    p = {2, "abcd"};//other way of making a pair.
    pair<int, string> &p1 = p; //p1 is a reference pair.
    p1.first = 3;
    cout<<p.first<<" " << p.second<< endl;
    std::cin>>p.first; // using this we can take input of an pair.
    
    pair<int, int> p_array[3]; //making 3 pairs.
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);// will swap two whole pairs.
    for(int i = 0; i < 3; i++)
    {
        std::cout << p_array[i].first << " " << p_array[i].second << std::endl;
    }

return 0;
}