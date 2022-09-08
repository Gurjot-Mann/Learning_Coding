#include <stdio.h>

int lineaarsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }
    return -1;
    
}
int binarysearch(int arr[], int size , int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,5,4,55,65,77,87,98,100};
    int size = sizeof(arr)/sizeof(int);
    int searchindex = lineaarsearch(arr, size, 55);
    int searchindexb = binarysearch(arr, size, 100);
    printf("The index of the searched element by linear search is = %d\n", searchindex);
    printf("The index of the searched element by binary search is = %d\n", searchindexb);

 return 0;
}