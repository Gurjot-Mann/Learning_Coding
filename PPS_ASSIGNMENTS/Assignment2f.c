#include <stdio.h>
int main(){
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("The entered year is a leap year.");
    else
    printf("The entered year is not a leap year.");
 return 0;
}