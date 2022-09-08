
#include<iostream>

using namespace std;

class Solution{
    public:
    long long trappingWater(int arr[], int n)
    {
       int l = 0, r = n-1;
       int leftmax = 0, rightmax = 0;
       long long res = 0;
       while(r>=l)
       {
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= leftmax) leftmax = arr[l];
                else res +=(leftmax - arr[l]);
                l++;
            }
            else
            {
                
                if(arr[r] >= rightmax)
                    rightmax = arr[r];
                else res+=(rightmax - arr[r]);
                r--;
            }
        }
        return res;
    }
};

int main()
{
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        
        cout << endl<<obj.trappingWater(a, n) << endl;
        
    }
}
