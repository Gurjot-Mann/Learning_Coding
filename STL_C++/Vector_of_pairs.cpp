#include <iostream>
#include <vector>
using namespace std;
void printvec(vector<pair<int, int> > &v)
{
    cout<<"size: "<< v.size()<<endl;//v.size() time comlexity O(1).
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;;
    }
    cout<<endl;
}
int main()
{
    //vector<pair<int, int> > v = {{1,2}, {2,3}, {4,5}}; // we can also intialize it like this.
    vector<pair<int, int> > v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin>>x >>y;
        v.push_back({x,y});
    }
    printvec(v);
    
    return 0;
}