#include <iostream>
#include <vector>
#include <functional>
using namespace std;




void foreach(const vector<int>& values, const function<void(int)>& func)
{
    for(int value: values)
        func(value);
}

int main ()
{   
    int a = 5;

    vector<int> values = {1,2,3,4,5};


   foreach(values, [=](int value){cout<<"Value1: "<<a<<endl;});//this is an example of lambda function which is capturing a by copying.
 
return 0;
}