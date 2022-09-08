#include<stdio.h>

int main()
{
    int a;
    float kms;
    while (1)
    {
          printf("Press 0 to exit.\n1 to convert kms to meters\n");
         scanf("%d",&a);

         switch (a)
     {
         case 0:

         goto end;

        break;
        
         case 1:
        
         printf("enter the value in kms.\n");
         scanf("%f",&kms);
         printf("your value in meters is: %.2f meters\n\n",kms*1000);

        break;
    
        default: printf("Value entered is wrong.\n");
        break;
     }

    }
    
  
    end:
    return 0;
}