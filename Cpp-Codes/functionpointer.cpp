#include <iostream>
#include <vector>
using namespace std;

void hello(int a)
{
    cout<<"hello world "<< a <<endl;
}

void print(int value)
{
    cout<<"value: "<<value<<endl;
}

void foreach(const vector<int>& values, void(*func)(int))
{
    for(int value: values)
        func(value);
}

int main ()
{   
    void(*world)(int) = hello;// we can also use & in front of hello. here we assigned a function to an variable.  we can also use auto function.
    world(4);
    world(5);

    vector<int> values = {1,2,3,4,5};
    foreach(values,print);
    foreach(values, [](int value){cout<<"Value1: "<<value<<endl;});//this is an example of lambda function which is not capturing anything.

return 0;
}