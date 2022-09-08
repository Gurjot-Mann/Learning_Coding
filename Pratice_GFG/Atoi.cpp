// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        int res = 0, neg = 1;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] == '-')
            {
                neg = -1;
                res += str[i+1]-48;
                res = res*neg;
                res = res*10;
                i++;
            }
            else if(str[i] >= 48 && str[i] <= 57)
            {
                res += (str[i]-48)*neg;
                if(i != str.size()-1)
                res = res*10;
            }
            else
            {
                return -1;
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends