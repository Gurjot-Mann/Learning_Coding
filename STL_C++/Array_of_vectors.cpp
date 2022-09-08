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
    vector<int> v[N];//Array of N no of vectors are made here.
    for (int i = 0; i < N; i++)
    {
        int n;
        cout<<"enter the number of times you want to push back in vec "<< i <<endl;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"enter the value of element "<< j << " of vector "<< i <<endl;
            cin>>x;
            v[i].push_back(x);      
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        printvec(v[i]);
    }
    cout<<v[0][0];// this will give us the first element of the first vector.
    
    

    return 0;
}