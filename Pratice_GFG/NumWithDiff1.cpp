// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<long long> absDifOne(long long N)
    {
        vector<long long> res;
        bool yes = false;
        string s[N];
        for (int i = 1; i <= N; i++)
        {
            s[i] = to_string(i);
                
        }
        for(int i)
        for(int j = 1; j<s[i].length(); j++)
            {
                if(!((s[j-1]- s[j]) == 1 || (s[j-1]- s[j]) == -1))
                {
                    yes = false;
                    break;
                }
                else yes = true;
            }
            if(yes == true)
                res.push_back(i);
        return res;
        
        
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            long long n;
            cin>>n;
            Solution ob;
            vector<long long> res = ob.absDifOne(n);
            for(int i = 0;i<res.size();i++)
                cout<<res[i]<<" ";
            if(res.size()==0)
                cout<<-1;
            cout<<endl;    
        }
}
  // } Driver Code Ends