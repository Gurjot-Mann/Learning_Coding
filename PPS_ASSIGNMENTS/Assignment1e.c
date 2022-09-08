#include <stdio.h>

int main()
{
    float a, b, r, ar, pr, ac, pc;
    printf("Enter the length,breadth of rectangle:\n");
    scanf("%f%f", &a, &b);
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    ar = a * b;
    pr = 2 * (a + b);
    ac = 3.14 * r * r;
    pc = 2 * 3.14 * r;
    printf("Area of Rectangle =%f", ar);
    printf("Parimeter of Rectangle =%f", pr);
    printf("Area of Circle =%f", ac);
    printf("Parimeter of Circle =%f", pc);
}