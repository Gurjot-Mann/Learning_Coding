#include <stdio.h>

void printarr(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    int temp;
    int issorted = 0;
    for (int i = 0; i < n-1; i++)//for number of passes.
    {
        printf("Working on pass no. %d\n", i+1);
        issorted = 1;
        for (int j = 0; j < n-1-i; j++)//for number of compsrisions.
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                issorted = 0;
            }
            
        }
        if (issorted)
        {
            return;
        }
        
        
    }
    
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printarr(A, n);
    bubblesort(A, n);
    printarr(A, n);
 return 0;
}