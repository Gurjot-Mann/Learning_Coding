// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> nge(n);
        vector<long long> res(n);
        for (int i = 0; i < n; i++)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                nge[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            nge[st.top()] = -1;
            st.pop();
        }
        for (int i = 0; i < nge.size(); i++)
        {
            if(nge[i] == -1)
            res[i] = -1;
            else
            res[i] =  arr[nge[i]];  
        }
        
        
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends