// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N)
	{
	    for (int i = 0; i < N; i++)
        {
            int prev = i>0? A[i-1]:-1;
            int pres = A[i];
            int next = i<A.length-1? A[i+1]:-1;
            if(pres!=prev&&pres!=next) return pres;
        }
	    return -1;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends