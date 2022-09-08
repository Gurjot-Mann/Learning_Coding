#include <stdio.h>
int main(){
    int sum = 1;

    for (int i = 2; i <= 5; i++)
    {
        int fac = 1;
        for (int j = 2; j <= i; j++)
        {
            fac = fac*j;
        }

        fac = fac/i;
        sum+=fac;
        fac = 1;
    }

    printf("%d", sum);
    
 return 0;
}