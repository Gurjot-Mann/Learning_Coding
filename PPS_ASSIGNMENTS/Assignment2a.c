#include <stdio.h>
int main(){
    float a ,b;
    printf("Enter the number a and b that you want to compare :\n");
    scanf("%f %f",&a,&b);
    if(a>b)
    printf("a = %f is greater than b = %f",a,b);
    else
    printf("b = %f is greater than a = %f",b,a);
 return 0;
}