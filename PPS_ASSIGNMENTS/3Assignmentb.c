#include <stdio.h>
int main()
{
    int a = 1,num,fact=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num==0)
    fact=1;
    else if(num>0)
    {
        while(a<=num)
        {
            fact = fact*a;
            a++;
        }
        printf("The factorial of a mumber %d is = %d",num,fact);
    }
 return 0;
}