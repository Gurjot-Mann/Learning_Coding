#include <stdio.h>

long factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
       return (n * (factorial(n - 1)));
    }
}

int main()
{
    int a;
    printf("enter the number you want factorial of:\n");
    scanf("%d", &a);
    printf("The factorial of %d is: %ld", a, factorial(a));
}