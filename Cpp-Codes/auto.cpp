#include <iostream>
using namespace std;
int main ()
{
    int x = 5;
    auto f = [=]() mutable
    {
        x++;
        cout<<x<<endl;
    };
    f();
return 0;
}