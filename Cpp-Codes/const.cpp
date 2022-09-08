#include <iostream>
using namespace std;

class hello
{
    int x,y;
    mutable int var;

    public:
    int getx() const // this const means we cannot change the value of x and y using this function.
    {
        var = 2; //we can change the value of var cause it is a mutable variable.
    }
};

int main ()
{

return 0;
}