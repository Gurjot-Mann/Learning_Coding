#include <stdio.h>
#include <math.h>
int main()
{
    int decimal_num, remainder,octal_num=0,p=0;
    printf("Enter the decimal munber:");
    scanf("%d", &decimal_num);
    while (decimal_num!=0)
    {
        remainder = decimal_num%8;
        octal_num = octal_num+remainder*pow(10,p);
        decimal_num = decimal_num/8;
        p++;
    }
    printf("The octal equivalent = %d\n", octal_num);
    
 return 0;
}