// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
   if(s.size()%2 != 0) return -1;
   stack<char> stk;
   
   // snippet to store unbalanced part of string 
   for( char c: s) 
   {
       if( c == '}')
       {
           if(!stk.empty() && stk.top() == '{') stk.pop();
           else stk.push(c);
       }
       else stk.push(c);
   }
   
   int openingCount = 0, closingCount = 0;
   
   // snippet to count the num of opening  and closing braces in unbalanced part
   while(!stk.empty()) 
   {
       if(stk.top() == '{') openingCount++;
       else break;
       stk.pop();
   }
   closingCount = stk.size();
   
   return ceil( openingCount/2.0 ) + ceil( closingCount/2.0 ); 
    
}