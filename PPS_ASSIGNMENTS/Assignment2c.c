#include <stdio.h>
int main(){
    float a;
    printf("Enter the number that you want to check:\n");
    scanf("%f",&a);
    if(a>0)
    printf("The number entered is positive.");
    else if(a==0)
    printf("The nomber entered is zero.");
    else
    printf("The number entered is negative.");
 return 0;
}