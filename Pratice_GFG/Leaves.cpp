#include <iostream>
#include <cstring>
#include <set>
using namespace std;
const int max = 105;
int main ()
{
    int n;
    cin>>n;
    set<pair<string, string> > leaves;
    string k, l;
    for (int i = 0; i < n+1; i++)
    {
        cin>>k>>l;
        leaves.insert({k, l});
    }
    cout<<leaves.size()<<endl;
return 0;
}