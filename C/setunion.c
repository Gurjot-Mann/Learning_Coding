#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 4, 5, 6, 7};
    int union1[10];
    int k;
    for (int i = 0; i < 5; i++)
    {
        union1[i] = arr1[i];
    }
    for (int j = 0; j < 5; j++)
    {
        union1[5 + j] = arr2[j];
    }
    printf("The values of union is:\n");
    for (int c = 0; c < 10; c++)
    {
        k = 0;
        for (int j = c + 1; j < 10; j++)
        {
            if (union1[c] == union1[j])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            printf("%d\n", union1[c]);
        }
    }

    return 0;
}