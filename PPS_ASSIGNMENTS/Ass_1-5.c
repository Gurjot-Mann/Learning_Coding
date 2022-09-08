#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    int sum=0;

    for (int i = 2; i <= n; i++)
    {
        if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0))
        {
            printf("%d ", i);
            sum++;
        }
    }
        printf("\nTotal no. of ugly prime in range of %d is %d", n, sum);
    

    return 0;
}