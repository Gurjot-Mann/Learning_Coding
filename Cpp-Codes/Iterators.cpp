#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main ()
{
    std::vector<int> values ={1, 2, 3, 4, 5};
    
    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
    {
        std::cout<< *it <<std::endl;
    }
    for (int value/*Or could be anything else*/ : values ) // This is a cleaner way to do the above thing.// This is called a range based for loop.
    {
        std::cout<< value <<std::endl;
    }
    using scoremap = std::unordered_map<std::string, int>;
    scoremap map;
    map["Cherno"] = 5;
    map["C++"] = 2;

    for (scoremap::const_iterator it1 = map.begin(); it1 != map.end(); it1++)
    {
        auto& key = it1->first;
        auto& value = it1->second;

        std::cout<< key << " = " << value << std::endl;
    }
    for (auto kv : map)
    {
        auto& key = kv.first;
        auto& value = kv.second;

        std::cout<< key << " = " << value << std::endl;
    }

    for (auto [key1, value1] : map)//only with c++ 17
       { 
           std::cout<< key1 << " = " << value1 << std::endl;
       }
return 0;
}