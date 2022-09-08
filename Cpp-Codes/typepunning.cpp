#include <iostream>
using namespace std;
struct entity
{
    int x, y;
};

int main ()
{
    int a = 50;
    double value = a;//inplicit conversion. for explicit conversion we will write (double) in front of a.
    value = *(double*)&a;
    cout<<value<<endl;
    entity e = {5, 8};
    int* position = (int*)&e;
    cout<< position[0]<<", "<<position[1]<<endl;
    int y = *(int*)((char*)&e + 4);
    cout << y << endl;
return 0;
}