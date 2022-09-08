#include <stdio.h>
int main()
{
    int a,b,x,d,e=1;
    float result,c1=1;
    printf("Enter the value of X = ");
    scanf("%d", &x);
    for ( a = 0; a <= 7; a++)
    {
        for ( b = 0, c1=1; b <= e; b++)
        {
            c1=c1*(x-1)/x;
        }
        e++;
        if(a>=2)
            result=result+(0.5*c1);
        else
        result=result+1;
    }
    printf("Sum of the fisrt seven terms of the given series = %d", result);
    
 return 0;
}