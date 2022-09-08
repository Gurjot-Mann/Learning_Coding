#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the number a, b and c that you want to compare :\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c)
        printf("a = %f is greater than b = %f and c = %f", a, b, c);
    else if (b > a && b > c)
        printf("b = %f is greater than a = %f and c = %f", b, a, c);
    else
        printf("c = %f is greater than a = %f and b = %f", c, a, b);
    return 0;
}