#include <stdio.h>
int main(){
    int number,t=0;
    printf("enter a 5 digit number:\n");
    scanf("%d",&number);
    t = number%10;
    number = number/10;
    t= t+number%10;
    number = number/10;
    t= t+number%10;
    number = number/10;
    t= t+number%10;
    number = number/10;
    t= t+number%10;
    printf("The sum is: %d",t);
 return 0;
}