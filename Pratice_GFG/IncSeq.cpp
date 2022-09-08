#include <iostream>
using namespace std;
const int MAXn = 2005;
int main ()
{
    int n, d;
    long long s = 0;
    cin>>n>>d;
    long long b[MAXn];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    for (int i = 1; i < n; i++) if (b[i-1]>=b[i])
    {
        int tmp = (b[i-1]-b[i]+d)/d;
        b[i]+=tmp*d;
        s+=tmp;
    }
    cout<<s<<endl;
    
    
return 0;
}