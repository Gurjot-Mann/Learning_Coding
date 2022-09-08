#include <iostream>
#include <fstream>
#include <experimental/optional>

using namespace std;

std::experimental::optional<std::string> readfileasstring(const std::string& filepath)
{
    std::ifstream strea(filepath);
    if(strea)
    {
        std::string result;
        //read file.
        strea.close();
        return result;
    }
    return {};
}

int main ()
{
    std::experimental::optional<std::string> data = readfileasstring("data.txt");

    std::string value = data.value_or("Not present");
    std::cout<< value <<endl;
    if (data)
    {
        std::cout<<"File read successfully!\n";
    }
    else
    {
        std::cout<<"File could not be opened!\n";
    }
    
return 0;
}