#include <iostream>
#include <vector>
using namespace std;
void printvec(vector<int> &v)
{
    cout<<"size: "<< v.size()<<endl;//v.size() time comlexity O(1).
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    vector<int> v; // made a vector of int.
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);//time complexity O(1).
    }
    printvec(v);
    v.pop_back();//will remove last element in the vector v.//O(1).

    vector<int> v2 = v; // vector v2 is a copy of v;//O(n).

    vector<int> v1(10, 5); // here a vector of size 10 is declared with all its values as 5.
    v1.push_back(7); // now the value 7 will be stored at 11th place.
    
return 0;
}