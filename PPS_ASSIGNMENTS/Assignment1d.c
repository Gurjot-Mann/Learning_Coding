#include <stdio.h>

int main ()
{
    float tempf,tempc;
    printf("Enter the temperature in Fahrenheit degree:\n");
    scanf("%f",&tempf);
    tempc = (5*(tempf-32))/9;
    printf("The temperature in Celcius degree is:%f\n",tempc);
}