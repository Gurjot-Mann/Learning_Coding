#include <stdio.h>

int binarysearch(int arr[], int size, int element, int low, int high)
{
    int mid;
    mid = (low+high)/2;
    if(arr[mid] == element)
    {
        return mid;
    }
    else
    {
        if(arr[mid]<element)
        {
            low = mid+1;
        }
        else if(arr[mid]>element)
        {
            high = mid-1;
        }
        binarysearch(arr, size, element, low, high);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int index = binarysearch(arr, size, 5, 0, size-1);
    printf("Index of element = %d", index);
 return 0;
}