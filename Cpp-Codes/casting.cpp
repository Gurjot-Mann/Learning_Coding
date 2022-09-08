#include <iostream>
using namespace std;
int main ()
{
    int value = 5.25;
    double s = static_cast<int> (value) + 5.53;
    cout<<s<<endl;

return 0;
}