#include <stdio.h>
int main()
{
    int a, b, c, d, e, h;
    printf("enter the amount\n");
    scanf("%d", &a);
    b = a / 100;
    c = a % 100;
    d = c / 50;
    e = c % 50;
    h = e / 10;

    printf("Total no. of currency note of 100 = %d\n", b);
    printf("Total no. of currency note of 50 = %d\n", d);
    printf("Total no. of currency note of 10 = %d\n", h);
    return 0;
}