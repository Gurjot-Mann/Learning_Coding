# include <stdio.h>

int main( )
{
int year = 1 ;
float principal = 6000, salvagevalue = 2000, yearlyprofit = 1000 ;
float valueoption1, valueoption2, interest ;

while (1)
{
valueoption1 = salvagevalue + yearlyprofit * year ;

interest = principal * 0.12f * year ;
valueoption2 = principal + interest ;

printf ( "year = %2d value option 1 = %10.2f valueoption 2 = %10.2f\n", year, valueoption1, valueoption2 ) ;

if ( valueoption1 > valueoption2 )
break;

year++;
}
printf ( "Minimum required life of the Machine is %d Years.\n", year - 1 ) ;
return 0 ;
}