#include <stdio.h>
int main()
{
    int max = 0, min = 0, temp, n;
    printf("What is the length of number set?\nnumber:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nNow enter the %d number: ", i);
        scanf("%d", &temp);
        if(temp>max)max=temp;
        if(i==1)min=temp;
        if(temp<min)min=temp;
    }
    printf("the range of set is %d", max-min);
    
 return 0;
}