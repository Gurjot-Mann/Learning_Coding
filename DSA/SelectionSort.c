#include <stdio.h>

void printarr(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionsort(int* A, int n)
{
    int indexofmin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexofmin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
            
    }
    
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    selectionsort(A, n);
    printarr(A, n);

 return 0;
}