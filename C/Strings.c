#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "hello";
    char rts[] = "world";
    char trs[20];
    puts(strcat(str, rts));
    printf("the length oh str is:%d\n", strlen(rts));
    printf("the reversed str is: %s\n", strrev(str));
    strcpy(trs, str);
    puts(trs);
    printf("The strcmp for str, rts returned is: %d", strcmp(str, rts));
}