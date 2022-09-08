#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n); // This will take two pointers as arguments one from where sorting should be started and other is one index next to where sorting should be done.
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    
    
return 0;
}