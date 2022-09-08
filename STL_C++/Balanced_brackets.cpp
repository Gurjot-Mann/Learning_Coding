#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;
unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
string balanced(string &s) //This function is only valid if there are only brackets in the input.
{
    stack<char> st;
    for(char bracket : s)
    {
        if(symbols[bracket] < 0)
        st.push(bracket);
        else if(symbols[bracket] > 0)
        {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0)
            return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        cout<<balanced(s)<<endl;
    }
return 0;
}