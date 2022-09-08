#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> v = {2, 3, 4, 5, 6, 7};
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<< (*it) << " ";
    }
    cout<<endl;

    vector<pair<int, int> > vp = {{1,2}, {2,3}, {3,4}, {4,5}};
    vector<pair<int, int> > ::iterator itp;
    for(itp = vp.begin(); itp != vp.end(); itp++)
    {
        cout<< itp->first << " "<<itp->second<<endl;
    }

return 0;
}