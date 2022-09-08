#include <stdio.h>
int main()
{
   int employ=1, overtime,pay,hours;
   while(employ<=10)
   {
       printf("\nEnter number of hours worked by employ: %d\n",employ);
       scanf("%d",&hours);
       if (hours>40)
       {
           overtime = hours - 40;
           pay = overtime*12;
           printf("The overtime pay for employ = %d\n",pay);
       }
       else if(hours<40)
       printf("There is overtime pay for employ.");
       employ++;
    }

 return 0;
}