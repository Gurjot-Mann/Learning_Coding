#include <iostream>
using namespace std;

void linear_search(int * arr, int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == item)
            cout<<arr[i]<<" is at index "<<i<<endl;
    }

    cout<<item<<" is not found";
    
}

void binary_search(int * arr, int low, int high, int item)
{
    int mid;
    while(low <= high)
    {
        mid = (high+low)/2;

        if(arr[mid] == item)
        {
            cout<<item<<" is found at index "<<mid<<endl;
            return;
        }
        else if(arr[low] == item)
        {
            cout<<item<<" is found at index"<<low<<endl;
            return;
        }
        else if(arr[high] == item)
        {
            cout<<item<<" is found at index"<<high<<endl;
            return;
        }

        if(item < arr[mid])
        {
            high = mid - 1;
        }
        else if(item > arr[mid])
        {
            low = mid + 1;
        }
    }

    cout<<item<<" is not found"<<endl;
}

void insert(int * arr, int size, int item, int index, int max_size)
{
    if(size >= max_size)
    {
        cout<<"Not enough size of array, insertion failed."<<endl;
        return;
    }

    for (int i = size+1; i < index; i--)
    {
        arr[i-1] = arr[i];
    }
    
}

int main ()
{
    
return 0;
}