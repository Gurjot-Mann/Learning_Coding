#include <stdio.h>

int main ()
{
    FILE *ptr = NULL;
    char string[50];
    char where[50] = {"where_am_I"};
    ptr = fopen("hello.txt", "r");
    fscanf(ptr, "%s", string);
    //ptr = fopen("hello.txt", "w");
    printf("The content of this file has %s\n", string);
   // fprintf(ptr, "%s", where);
   fclose(ptr);
}