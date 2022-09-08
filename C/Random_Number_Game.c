#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int fun, num;
    srand(time(NULL));
    fun = rand()%10;

    printf("You have 4 tries to guess the number.\n");

    for (int i = 1; i < 5; i++)
    {
        printf("%d try\n",i);
        scanf("%d",&num);

        if (fun == num)
        {
            printf("You won\n");
            goto send;
        }
      
        
    }
        
       send:
       printf("Game over the number was: %d", fun);
}