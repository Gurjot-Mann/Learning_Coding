#include <stdio.h>
int main(){
    int C,D,temp;
    printf("enter two numbers:\n");
    scanf("%d %d",&C,&D);
    printf("value of C = %d and D = %d before swaping.\n",C,D);
    temp = C;
    C=D;
    D=temp;
    printf("value of C = %d and D = %d after swaping.\n",C,D);
 return 0;
}