#include <stdio.h>
int main(){
    char a;
    printf("Enter an alphabet:\n");
    scanf("%c",&a);
    if(a <= 90 && a >= 65)
    printf("The entered alphabet is an upper case alphabet.");
    else
    printf("The entered alphabet is an lower case alphabet.");
 return 0;
}