#include <stdio.h>
int main()
{
    int a=1,b;
    float fact,sum=0.0;
    while(a<=7)
    {
        fact= 1.0;
        for ( b = 1; b <= a; b++)
            fact =fact*b;
            sum=sum+a/fact;
            a++;
    }
    printf("Sum of series = %f", sum);
 return 0;
}