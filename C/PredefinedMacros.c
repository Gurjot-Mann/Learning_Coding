#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ANSI: %d\n",__STDC__);
    printf("File name is %s\n",__FILE__);
    printf("Time is %s\n",__TIME__);
    printf("Today's date is %s\n",__DATE__);
    printf("Line no. is %d\n",__LINE__);
}