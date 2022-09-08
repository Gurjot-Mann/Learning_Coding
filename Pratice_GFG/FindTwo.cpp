
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



class Solution{
public:
    int res[2];
    int *findTwoElement(int *arr, int n) 
    {
         vector<int> vec(n+1 , 0);
        
        for(int i = 0 ;  i < n ; i++){
            
            if(vec[arr[i]] ==  0){

                vec[arr[i]]++;
            }
            else{

                res[0] = arr[i];
            }
        }

        for(int i = 1 ;  i <= n ; i++){

            if(vec[i] == 0){

                res[1] = i;
            }
        }

        return res;
    }
};



int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}