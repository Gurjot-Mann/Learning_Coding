#include <stdio.h>
int main()
{
    char a;
    printf("Enter an character:\n");
    scanf("%c", &a);
    if ((a <= 90 && a >= 65) || (a <= 122 && a >= 97))
    {

        printf("The character entered is an anphabet.");
    }
    else
    {

        printf("The entered character is not an alphabet");
    }
    return 0;
}