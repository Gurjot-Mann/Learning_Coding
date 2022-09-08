#include<stdio.h>

int sum (int a , int b)
{
    return a+b;
}
int greet(int(*ptr)(int,int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is:%d", ptr(5,7));
}
int main ()
{
    int (*tr)(int,int);
    tr = sum;
    greet(tr);
}