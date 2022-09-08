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
int main()
{
    int N;
    cout<<"enter the number of vectors needed:"<<endl;
    cin>>N;
    vector<vector<int> > v;
   
    for (int i = 0; i < N; i++)
    {
        int n;
        cout<<"enter the number of times you want to push back in vec "<< i <<endl;
        cin>>n;
        // vector<int> temp;
        v.push_back(vector<int> ());// Isse ab ek khaali vector pushback ho gya hai 'v' main.
        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"enter the value of element "<< j << " of vector temp" <<endl;
            cin>>x;
            // temp.push_back(x);
            v[i].push_back(x);
        }
        // v.push_back(temp);
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        printvec(v[i]);
    }
    cout<< v[0][0]; // will give us the value of first element of the first vector.
    return 0;
}