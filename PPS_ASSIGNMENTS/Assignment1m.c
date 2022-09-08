#include <stdio.h>
int main()
{
    int num, t = 0, r = 0;
    printf("enter the five digit number:\n");
    scanf("%d", &num);
    t = (num % 10) + 1;
    num = num / 10;
    t = (t * 10) + (num % 10) + 1;
    num = num / 10;
    t = (t * 10) + (num % 10) + 1;
    num = num / 10;
    t = (t * 10) + (num % 10) + 1;
    num = num / 10;
    t = (t * 10) + (num % 10) + 1;
    r = t % 10;
    t = t / 10;
    r = r * 10 + t % 10;
    t = t / 10;
    r = r * 10 + t % 10;
    t = t / 10;
    r = r * 10 + t % 10;
    t = t / 10;
    r = r * 10 + t % 10;

    printf("the new sum is = %d", r);

    return 0;
}