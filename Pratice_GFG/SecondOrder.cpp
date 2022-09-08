#include <iostream>
#include <algorithm> 
using namespace std;
const int MAX = 105;
int main ()
{
    int arr[MAX];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    sort(arr, arr+n);
    int num;
    bool yes = true;
    int i = 0;
    while(i<n)
    {
        if(arr[i]>arr[0] && yes == true)
        {
            num = arr[i];
            yes = false;
        }
        i++;
    }
    if(yes == false)
        cout<<num<<endl;
    else
        cout<<"NO"<<endl;
    
return 0;
}