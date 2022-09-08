#include <iostream>
using namespace std;
const int MAX = 105;
int main ()
{
    int n,m, yes = 1;
    string flag[MAX];
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>flag[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(yes == 0)
            break;
        for (int j = 1; j < m; j++)
        {
            if(flag[i][j] == flag[i][j-1] )
            {

                if(flag[i][j] == flag[i+1][j])
                {
                    yes = 0;
                    break;
                }
            }
            else
                yes = 0;
        }
        
    }
    if(yes)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
return 0;
}