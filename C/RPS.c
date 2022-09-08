#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    if ((c1 == 'r') && (c2 == 's'))

    {
        return 1
    }
    else
    {
        return 0
    }
    if ((c1 == 'p') && (c2 == 'r'))

    {
        return 1
    }
    else
    {
        return 0
    }
    if ((c1 == 's') && (c2 == 'p'))

    {
        return 1
    }
    else
    {
        return 0
    }
}

int main()
{
    int i = 0, j = 0, temp;
    char pcahr, cchar char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock Paper Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        printf("choose 1 for rock,\n2for paper,\n3 for scissors.\n");
        printf("player 1's turn\n");
        scanf("%d", &temp);
        pchar = dict[temp - 1];

        printf("choose 1 for rock,\n2for paper,\n3 for scissors.\n");
        printf("Computers's turn\n");
        temp = generaterandomnumber(3) + 1 cchar = dict[temp - 1];
        if (greater(cchar, pchar) == 1)
        {
            j++;
        }
        else if (greater(cchar, pchar) == -1)
        {
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
}