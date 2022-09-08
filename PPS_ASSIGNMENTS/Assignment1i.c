#include <stdio.h>
int main(){
    int number,t=0;
    printf("enter a 4 digit number:\n");
    scanf("%d",&number);
    t= number%10;
    t= t+number/1000;
    printf("The sum of first and last number of the four digit no. is: %d",t);
 return 0;
}