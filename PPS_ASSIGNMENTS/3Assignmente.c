#include <stdio.h>
int main()
{
    int a,b,c,d,e,num=1, result;
    while(num<=500)
    {
        a=num%10;
        b=num/10;
        c=b%10;
        d=b/10;
        e=d%10;
        if(num == (a*a*a)+(c*c*c)+(e*e*e))
        printf("%d\n",num);
        num++;
    }
 return 0;
}