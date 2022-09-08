#include <iostream>

using namespace std;

class entitybi
{
    int inventory[8];
   public:
    int x = 1, y = 1, z = 1;
   
    int speed=2;
   
    public:
        void move(int a,int b, int c, char R)
        {
            if (R == 'r')
            {
                speed = speed+2;
            }
            
            x = x + a*speed;
            y = y + b*speed;
            z = z + c*speed;
        }

};
class steve : public entitybi
{
     int hand;
     int height = 2;
};

int main ()
{
    steve p1;
    p1.move(2,2,2,'a');
    cout<<p1.x<<", "<<p1.y<<", "<<p1.z<<endl;
return 0;
}