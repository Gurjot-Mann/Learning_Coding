#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if (a % 5 == 0)
        printf("The number entered is divisible by 5.");
    else if (a % 11 == 0)
        printf("The number entered is divisible by 11.");
    else
        printf("The number is not divisible by 5 or 11.");
    return 0;
}