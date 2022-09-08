#include <iostream>
using namespace std;

 class entity
 {
     public:
     float x,y;

     void move (float xa, float ya)
     {
         x+=xa;
         y+=ya;
     }
 };

 class player : public entity
 {
     public:
     const char* name;
     void print()
     {
         cout<< name <<endl;
     }
 };

int main ()
{
    player pl;
    pl.move(5,5);
    pl.print();

    cin.get();
    
return 0;
}