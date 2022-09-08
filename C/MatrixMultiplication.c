#include <stdio.h>

int func(int ar[], int arr[])
{
}

int main()
{
    int m1[][2] = {{1, 2}, {2, 1}};
    int m2[2][2] = {{1, 2}, {2, 1}};
    int sum = 0;
    int result[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum+=( m1[i][k]*m2[k][j]);
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" The value of %d,%d of the result is %d\n",i,j,result[i][j]);
        }
        
    }
    
}