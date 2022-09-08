#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout<< min << endl;
    int max = *max_element(v.begin(), v.end());
    cout<< max << endl;
    // int sum = accumulate(v.begin(), v.end(), 0); // accumulate give us the sum of the array or vectorand if instead of zero we add some other value it will add it to the sum of array.
    // cout << sum << endl;
    // int count = count(v.begin(), v.end(), 5); // count will give us the frequency of the element.
    // cout<< count << endl;
    int element = *find(v.begin(), v.end(), 5); // find will find the elements and return the pointer to it.
    cout << element << endl;
    
    reverse(v.begin(), v.end());  // it will reverse the array or vector. It can also reverse a string.

return 0;
}