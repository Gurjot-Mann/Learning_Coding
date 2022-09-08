#include <iostream>
using namespace std;
int main ()
{
    char pass[3][3];
    int yes = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>pass[i][j];
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(pass[i][j] != pass[2-i][2-j])
                yes = 0;
        }
        
    }
    if(yes)
        cout<<"YES";
    else
        cout<<"NO";    
return 0;
}