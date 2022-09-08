// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
       sort(a, a+size);
       int max = -1;
       vector<int> hsh((a[size-1]+1), 0);
       
       for (int i = 0; i < size; i++)
       {
           hsh[a[i]]++;
       }
       for (int i = 0; i < hsh.size(); i++)
       {
           if(hsh[i]>(size/2) && hsh[i]>max)
            max = i;
       }
       return max;
       
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends