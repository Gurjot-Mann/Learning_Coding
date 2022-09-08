// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
        vector<vector<int>> subsets;
        int count = 0;
        void subarray(const vector<int> &nums, long long k)
        {
            int n = nums.size();
            int ct = (1<<n);
            for(int mask = 0; mask < ct; ++ mask)
            {
                vector<int>subset;
                for (int i = 0; i < n; i++)
                {
                    if((mask & (1<<i)) != 0)
                    {
                        subset.push_back(nums[i]);
                    }
                }
                subsets.push_back(subset);
                
            }
        }
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        subarray(a, k);
        for(auto sub : subsets)
        {
            int resi = 1;
            for(auto ele : sub)
            {
                cout<<ele<<" ";
                resi = resi * ele;
            }
            cout<<endl;
            if(resi < k)
            {
                count++;
            }
            else
                return count;
             

        }
        return count+1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends