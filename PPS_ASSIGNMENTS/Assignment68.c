#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any number to know its table till 10 =");
    scanf("%d", &a);
    for ( b = 1; b <=10; b++)
    {
        printf("%d x %d = %d\n",a,b,b*a);
    }
    
 return 0;
}