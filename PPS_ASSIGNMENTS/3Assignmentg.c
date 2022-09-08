#include <stdio.h>
int main()
{
    int a, b=0, c=0,d=0, num;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&a);
    while (a>0)
    {
        printf("enter the numbers.\n");
        scanf("%d", &num);
        if(num>0)
        b++;
        if(num<0)
        c++;
        if(num==0)
        d++;
        a--;
    }
    printf("\nYou entered:\n%d Positive numbers.\n%d Negative numbers\n%d Zeroes", b, c, d);

    
 return 0;
}