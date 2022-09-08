#include <iostream>
using namespace std;

class entity
{
    public:
    float x,y;
   entity()
    {
        cout<<"constructed entity"<<endl;
    }
    entity(float a, float b)
    {
        x=a;
        y=b;
    }
    ~entity()
    {
        cout<<"destructed entity"<<endl;
    }
    void print()
    {
        cout<<x<<", "<<y<<endl;
    }
};
    void func()
    {
         entity e;
         e.print();
    }

int main ()
{
   func();
return 0;
}