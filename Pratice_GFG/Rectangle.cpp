#include <iostream>
using namespace std;
int main ()
{
    string a[50];
    int n, m, verts = -1, verte = 0, horis = -1, horie = 0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == '*')
            {
                if(verts>i || verts == -1) verts = i;
                if(verte<i) verte = i;
                if(horis>j || horis == -1) horis = j;
                if(horie<j) horie = j;
            }
        }
        
    }
    for (int i = verts; i <= verte; i++)
    {
        for (int j = horis; j <= horie; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    
    
    
    
    
return 0;
}