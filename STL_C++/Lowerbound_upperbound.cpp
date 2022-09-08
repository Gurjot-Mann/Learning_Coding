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
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    int *ptr = lower_bound(a, a+n, 7); // lower bound (only sorted array to be passed) finds the element in the array and returns the pointer to the element if found but if not found it returns the pointer to the element which is greater to the element and if there is no value which is greater than the searched element it returns the pointer next to last element.
    int *ptr1 = upper_bound(a, a+n, 7); // upper bound (only sorted array to be passed) returns the pointer of the element which is greater than the searched element.
    //in sets use it like s.lower_bound(value to be found);
    //in maps it is used only for the key.
    if(ptr == (a+n))
        cout<< "Not found" << endl;
    else
        cout<< (*ptr) << endl;

    
    
return 0;
}