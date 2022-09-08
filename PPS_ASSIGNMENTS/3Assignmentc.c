#include <stdio.h>
int main()
{
    int a,b,result=1;
    printf("\nEnter any two numbers:\n");
    scanf("%d %d",&a,&b);
    while(b>0)
    {
        result = result*a;
        b--;
    } 
    printf("Result = %d",result);  
 return 0;
}