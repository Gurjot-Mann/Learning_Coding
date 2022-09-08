#include <iostream>
using namespace std;
void increment(int& v){
    v++;
}
void inc(int* ptr){
    (*ptr)++;
}
int main ()
{
    int a = 12;
    int& ref = a;
    increment(a); //increment with reference
    inc(&a);//increment with pointer
    //ref = 15;
    cout<<a<<endl;
return 0;
}