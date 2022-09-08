#include <stdio.h>
#include <string.h>

int main()
{
    int in = 0;
    int index = 0;
    char pr[] = {"<br>   hello everyone what's going on    </br>"};
    char sr[50];

    for (int i = 0; i < strlen(pr); i++)
    {
        if (pr[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (pr[i] == '>')
        {

            in = 0;
            continue;
        }
        if (in == 0)
        {
            pr[index] = pr[i];
            index++;
        }
    }
    pr[index] = '\0';

    while (pr[0] == ' ')
    {
        for (int i = 0; i < strlen(pr); i++)
        {
            pr[i] = pr[i + 1];
        }
    }
    while (pr[strlen(pr)-1] == ' ')
    {
        pr[strlen(pr)-1] = '\0';
    }
    

    printf("~~%s~~", pr);
}