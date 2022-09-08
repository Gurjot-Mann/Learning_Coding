#include <bits/stdc++.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>

using namespace std;
int main ()
{
    int a = 0;
    COORD cur;
    system("cls");
    cout<<cur.X<<" "<<cur.Y<<endl;//windows.h
    while(1)
    {
        if(kbhit())//conio.h
        {
            char ch = getch();
            if(ch == 'a')
            {
                a++;
                cout<<a<<endl;
            }

        }
        Saleep(100);
        cout<<"NO"<<endl;
    }
return 0;
}