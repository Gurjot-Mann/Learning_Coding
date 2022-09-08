// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string up ="", low = "", res = "";
        for (int i = 0; i < n; i++)
        {
            if(str[i] >= 65 && str[i] <= 90)
            {
                up+=str[i];
            }
            else if(str[i]  >= 97 && str[i] <= 122)
            {
                low+=str[i];
            }
            
        }
        sort(up.begin(), up.end());
        sort(low.begin(), low.end());
        int k = 0, l = 0;
        for (int j = 0; j < n; j++)
        {
            
            if(str[j] >= 65 && str[j] <= 90)
            {
                res+=up[k];
                k++;
            }
            else if(str[j]  >= 97 && str[j] <= 122)
            {
                res+=low[l];
                l++;
            }

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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends