#include <stdio.h>
int main()
{
    int a,x,b=71,c=70,d=1,sp;
    for(x=1; x<=7; x++)
    {
        for ( a = 65; a <= b; a++)
        printf("%c", a);
        if(x==2)
        c=70;
        for(sp = 2; sp<d; sp++)
        printf(" ");
        for(a=c; a>=65;a--)
        printf("%c", a);
        printf("\n");
        b--;
        c--;
        d=d+2;
    }
    
 return 0;
}