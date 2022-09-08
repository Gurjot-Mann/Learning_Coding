#include <iostream>
using namespace std;
int main ()
{
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int l[1440], r[1440];
    int res =0;
    for (int i = 1; i <= n; i++)
    {
        cin>>l[i]>>r[i];
        res = p1*(r[i]-l[i]);
        if(i == 1) continue;

        int t = l[i]-r[i-1];
          res+=p1*min(t1,t)+p2*min(t2,max(t-t1,0))+p3*max(t-t1-t2,0);
    }
    
    cout<<res<<endl;
return 0;
}