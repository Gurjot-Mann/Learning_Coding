#include <stdio.h>
int main()
{
    int a, b, n=6;
    for ( a = 1; a <= 10; a++)
    {
        if (a==1 || a==2 || a==4 || a==7)
        {
            printf("\n");
            for(b=1; b<=n; b++)
            printf(" ");
            n=n-2;
        }
        printf("%4d", a);
        
    }
    
 return 0;
}