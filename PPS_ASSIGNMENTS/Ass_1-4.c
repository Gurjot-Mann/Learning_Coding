#include <stdio.h>
#include <conio.h>

int main(){
    int n, pal=0;

    printf("Enter the no.: ");
    scanf("%d",&n);

    if(n<10){
        printf("I think its a palindrome.");
        return 1;
    }

    int temp = n;
    while(temp!=0)
    {
        pal = pal*10;
        pal+=(temp%10);
        temp = temp/10;
    }


    if (n == pal)
    {
        printf("No. %d is palindrome.", n);
    }
    else
        printf("No. %d is not palindrome.", n);
    
    
 return 0;
}