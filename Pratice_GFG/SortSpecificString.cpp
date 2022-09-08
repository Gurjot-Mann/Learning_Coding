// { Driver Code Starts
#include<iostream>
#include <cstring>
#include <algorithm>
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
            auto hn = isupper(str[i]);
            if (hn == 1)
            {
                up+=str[i];
            }
            else if(hn == 0)
            {
                low+=str[i];
            }
            
        }
        sort(&up[0], &up[up.size()]);
        sort(&low[0], &low[low.size()]);
        
        int k = 0, l = 0;
        for (int j = 0; j < n; j++)
        {
            auto yes = isupper(str[j]);
            if(yes == 1)
            {
                res+=up[k];
                k++;
            }
            else if(yes== 0)
            {
                res+=low[l];
                l++;
            }

        }
        return res;

        // string uppercase_ , lowercase_ ;

        // for (int i = 0; i < n; i++)
        // {
        //     if(!isupper(str[i])){

        //         lowercase_.push_back(str[i]);
        //     }
        //     else{

        //         uppercase_.push_back(str[i]);
        //     }
        // }

        // sort(lowercase_.begin(), lowercase_.end());
        // sort(uppercase_.begin() , uppercase_.end());

      


        




        
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