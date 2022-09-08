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
    else if(a>=33 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=126)
    {

        printf("The entered character is a special symbol.");
    }
    else
    printf("The character is an digit.");
    return 0;
}