#include <iostream>
using namespace std;
int main ()
{
    int level =1,speed =2;

    speed = level>5 ? 10 : 5;// 10 if true 5 if false.
    cout<<speed<<endl;
    speed = level>5 ? level<10 ? 15:10:5;  //if both true then 15 if first true 10 if both false 5 even if one condition is false then 5.
    cout<<speed<<endl;
return 0;
}