// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<int> primeRange(int M, int N) 
    {
        vector<int> res;
        
        for (int i = M; i <= N; i++)
        {
            bool yes = true;
                if (i <= 1)
                yes = false;
            if (i == 3 || i == 2)
                res.push_back(i);
                
        
            // This is checked so that we can skip
            // middle five numbers in below loop
            if (i % 2 == 0 || i % 3 == 0)
                yes = false;
        
            for (int j = 5; j * j <= i; j = j + 6)
                if (i % j == 0 || i % (j + 2) == 0)
                    yes = false;
        
            
            if(yes == true)
            {
                res.push_back(i);
            }
        }
        return res;
    
    }
    vector<int> primeDivision(int N)
    {
        vector<int>res;
        vector<int> range = primeRange(0, N);
        bool yes = false;
        for (int i = 0; i < range.size(); i++) 
        {
            if(yes == true) break;
            for (int j = 0; j < range.size(); j++)
            {
                if(range[i]+range[j] == N)
                {
                    res.push_back(range[i]);
                    res.push_back(range[j]);
                    yes = true;
                    break;
                }
            }
            
        }
        return res;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends