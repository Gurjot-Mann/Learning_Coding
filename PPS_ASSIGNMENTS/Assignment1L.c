#include <stdio.h>
int main()
{
    float tsp, profit, cp;
    printf("Enter the total selling price and profit earned of 15 items\n");
    scanf("%f %f", &tsp, &profit);
    cp = tsp - profit;
    printf("Cost price = %f\n", cp);
    return 0;
}