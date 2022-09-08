#include <stdio.h>

int main()
{
    float bs,da,hra,gs;
    printf("Enter the basic salary:\n");
    scanf("%f",&bs);
    da = (40*bs)/100;
    hra = (20*hra)/100;
    gs = bs-(da+hra);
    printf("Ramesh's gross salary=%f\n",gs);
}