#include <stdio.h>
int main(){
    char a;
    printf("Enter an alphabet:\n");
    scanf("%c",&a);
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a =='U')
    printf("The entered alphabet is an vowel.");
    else 
    printf("The entered alphabet is a consonant.");
 return 0;
}