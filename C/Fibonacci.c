#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int num;
    printf("Enter the index of which you want fibonacci number:\n");
    scanf("%d", &num);
    printf("The fibonnaci number of index %d is:%d", num, fibonacci(num));
}