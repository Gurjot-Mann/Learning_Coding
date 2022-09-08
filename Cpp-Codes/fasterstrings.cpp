#include <iostream>
#include <cstring>

using namespace std;

void printname(std::string_view name)
{
    cout<< name <<endl;
}

int main ()
{
    std::string name = "Yan Chenikov";

    #if 0
        std::string firstname = name.substr(0, 3);
        std::string lastname = name.substr(4, 9);
    #else
        std::string_view firstname(name.c_str(),3);
        std::string_view lastname(name.c_str()+4, 9);
    #endif

        printname(firstname);
        printname(lastname);
return 0;
}