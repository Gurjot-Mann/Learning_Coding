// { Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <vector>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
class Solution {
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
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends