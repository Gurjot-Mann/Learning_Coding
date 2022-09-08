#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 4, 5, 6, 7};
    int common[10];
    int k;
    for (int i = 0; i < 5; i++)
    {
        common[i] = arr1[i];
    }
    for (int j = 0; j < 5; j++)
    {
        common[5 + j] = arr2[j];
    }
    printf("The values of union is:\n");
    for (int c = 0; c < 10; c++)
    {
        k = 1;
        for (int j = c + 1; j < 10; j++)
        {
            if (common[c] == common[j])
            {
                k = 0;
                break;
            }
        }
        if (k == 0)
        {
            printf("%d\n", common[c]);
        }
    }

    return 0;
}