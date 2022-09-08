// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
   public:
   double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
   {
       // Your code goes here
       int n = arr1.size(), m = arr2.size();
       vector<int>res;
       for(int i=0;i<n;i++)
       {
           res.push_back(arr1[i]);
       }
       for(int i=0;i<m;i++){
           res.push_back(arr2[i]);
       }
       sort(res.begin(),res.end());
       int size = res.size();
       if(size%2!=0)
           return res[size/2];
       else
       {
           return (res[size/2]+res[size/2-1])/2.00000;
       }
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends