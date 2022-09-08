#include <stdio.h>
int main()
{
    int i,j=1;
    while (j<=300)
    {
        i=2;
        while(i<j)
        {
            if(j%i==0)
            break;
            else
            i++;
        }
        if(i==j)
        printf("%d  ", j);
        j++;
    }
 return 0;
}