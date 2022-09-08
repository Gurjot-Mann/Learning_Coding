#include <stdio.h>
int main()
{
    int p, q;
    float r, n;

    for (int i=0;i<10;i++)
    {
        printf("Enter The Principal= ");
        scanf("%d", &p);

        printf("Enter The Rate= ");
        scanf("%f", &r);

        printf("Enter The Time= ");
        scanf("%f", &n);

        printf("Enter number of times interest is compounded each year= ");
        scanf("%d", &q);

        printf ("The Amount is: %f\n\n", (float)p*(1+(r/q)*n*q));
    }
 return 0;
}