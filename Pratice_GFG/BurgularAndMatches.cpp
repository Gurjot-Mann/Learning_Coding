#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 25;
int main ()
{
    int n,m;
    cin>>n>>m;
    long long res = 0;
    int done[MAX];
    vector<pair<long long , long long> > container;
    for (int i = 0; i < m; i++)
    {   
        long long x, y;
        cin>>x>>y;
        container.push_back({x,y});
    }

    sort(container.begin(), container.end(), [](auto x, auto y){return x.second > y.second;});
    
    for (int i = 0; i < m ; i++)
    {
        if(n >= container[i].first)
        {
           res+=container[i].first*container[i].second;
           n-=container[i].first;
        }
        else if(container[i].first>n)
        {
            res+=n*container[i].second;
            n=0;
        }
        if(!n)
            break;
        
        
    }
    cout<<res<<endl;
   
    
    
    
    
    
    
    
return 0;
}