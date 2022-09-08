#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    int m;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    //calloc just uses a comma instead of * , and its value is not garbage its value is 0 if we dont put any value there.//

    for (int i = 1; i < n+1; i++)
    {
        printf("enter the value no %d of this array:", i);
        scanf("%d", &ptr[i]);
    }

    for (int j = 1; j < n+1; j++)
    {
        printf("The value on no %d is: %d\n", j, ptr[j]);
    }

    printf("enter the new value of array:");
    scanf("%d", &m);
    ptr = (int *)realloc(ptr, m * sizeof(int));
    //for (int k = 0; k < n; k++)
    {
        // printf("enter the newvalue")
    }
    //for (int k = 0; k < m; k++)

    printf("enter the new value:");
    scanf("%d", &ptr[m]);

    for (int l = 1; l < m + 1; l++)
    {
        printf("value at element %d is: %d\n", l, ptr[l]);
    }

    free(ptr);
}