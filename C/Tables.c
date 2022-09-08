#include<stdio.h>

int main()
{
    int table;
    printf("Which table do you want to print?\n");
    scanf("%d",&table);
    printf("Your table is:\n");
    for (int i = 1;i <= 10; i++)
    {
        printf("%d x %d = %d\n" , table, i, table*i);
    }
    
}