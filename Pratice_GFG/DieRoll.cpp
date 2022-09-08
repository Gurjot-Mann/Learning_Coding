#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int y, w, max =0;
    int pro = 0, k =6;
    cin>>y>>w;
    if(y>w) 
        max=y;
    else 
        max = w;
   pro =6-max+1;
   
    for (int i = 1; i < 6; i++)
    {
        if (pro%i == 0 && k%i == 0)
        {
            pro/= i;
            k/= i;
        }
        
    }
    

   cout<< pro <<"/"<<k<<endl;
    
return 0;
}