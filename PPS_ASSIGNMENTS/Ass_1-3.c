#include <stdio.h>

float discount(float price)
{
    float discount;
    if (price<1000)
    {
        discount = 0.05;
    }
    else if(price<5000)
    {
        discount = 0.10;
    }
    else discount = 0.15;
    
    return discount;
}

void print_total(float *items, int n)
{
    float total_wt_dis = 0;
    float dis[n];
    float with_dis[n];
    for (int i = 0; i < n; i++)
    {
        dis[i] = discount((*(items+i)));
        with_dis[i] =(*(items+i))*(*(dis+i));
        total_wt_dis+=(*(items+i));
    }
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        printf("\nPrice of Item %d: %0.2f discount: %0.2f\n", i+1, *(items+i), *(dis+i));
        printf("Price of Item  with discount: %0.2f\n", *(with_dis+i));
        total+=with_dis[i];
    }
    printf("\n***********************************\n");
    printf("Total Discount: %0.2f\n", total_wt_dis - total);
    printf("Total price with discount: %0.2f\n", total);
    printf("***********************************");
   
}

int main(){

    int n;

    printf("Enter the no. of items bought: ");
    scanf("%d", &n);
    printf("\n");
    float items_prices[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the price of item no. %d: ", i+1);
        scanf("%f", (items_prices+i));
    }
    
    print_total(items_prices, n);


 return 0;
}