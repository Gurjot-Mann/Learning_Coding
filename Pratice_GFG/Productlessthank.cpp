// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
 void helper(int arr[],int i,int n,int k,int &cnt,int p){
       if(p > k) return;
       
       if(i == n){
           if(p <= k) cnt++;
           return;
       }
       
       int x = arr[i];
       helper(arr,i+1,n,k,cnt,p);
       helper(arr,i+1,n,k,cnt,p*x);
       
   }
   
   int numOfSubsets(int arr[], int N, int K) {
       int cnt = -1;
       helper(arr,0,N,K,cnt,1);
       return (cnt);
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends