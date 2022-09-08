// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) 
    {
        int t = n;
        if(m>n)
            t = m;
        int temp[n+m];
        int j = 0;

        for (int i = 0; i < t; i++)
        {
            if(i<n)
            {
                temp[j] = arr1[i];
                j++;
            }
            if(i<m)
            {
                temp[j] = arr2[i];
                j++;
            }
        }
        sort(temp, temp+(n+m));
        int p = 0;
        for (int k = 0; k < n; k++)
        {
            arr1[k] = temp[p];
            p++;
        }
        for (int l = 0; l < m; l++)
        {
            arr2[l] = temp[p];
            p++;
        }
        
        
        
        
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends