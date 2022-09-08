// { Driver Code Starts
#include<iostream>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {   
        string res = "";
        int j = 0;
        int k = 0;
        for(int i = 0; i < s.size()+1; i = j)
        {
            if(s[i] == '0' && s[i+1] == '.')
            {
                res+=s[i];
                j++;
                continue;
            }
            if(s[i] == '0' && s[i+1] == '\0')
            {
                res+=s[i];
                break;
            }

            if(s[i] == '0' )
            {
                j++;
                continue;
            }
            
            if(s[i] != '0' && s[j] != '.')
            {
                j = i;
                while (s[j] != '.')
                {
                    res += s[j];
                    j++;
                    k++;
                    if(s[j]== '\0')
                        break;
                }
            }
            if(s[j] == '.')
            {
                res += s[j];
                k++;
                j++;
                
            }
            if(s[j] == '\0')
            {
                res+=s[j];
                break;
            }

            
                
        }
        return res;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout<<ob.newIPAdd (s)<<endl;
    }
}

  // } Driver Code Ends