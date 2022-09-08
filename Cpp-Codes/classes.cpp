#include <iostream>
using namespace std;

class player
{
public:
    int x = 0, y = 0;
    int speed = 2;

    void move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    player p1;

    p1.move(1, -1);
    cout << p1.x << p1.y << endl;
}