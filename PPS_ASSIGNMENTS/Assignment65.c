#include <stdio.h>
int main()
{
    float i, y, x;
    printf("Values of\n");
    printf("\ti\t\ty\t\tx\n");
    for ( y = 1; y <=6; y++)
    {
        for ( x = 5.5; x <= 12.5; x=x+0.5)
        {
            i=2+(y+(0.5*x));
            printf("%10f\t%10f\t%10f\n",i,y,x);
        }
        
    }
    
 return 0;
}