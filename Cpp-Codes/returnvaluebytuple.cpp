#include <iostream>
#include <cstring>
#include <tuple>

using namespace std;

std::tuple< std::string, int> createperson()
{
    return {"Cherno", 24};
}


int main ()
{
        auto person = createperson();
        std::string& name = std::get<0>(person);
        int age = std::get<1>(person);

        //another way of doing this is using tie.
        std::string name1;
        int age1;
        std::tie(name1, age1) = createperson();

        //another way  is
        auto[name2, age2] = createperson();//ato run this we need c++ 17 or above.
return 0;
}