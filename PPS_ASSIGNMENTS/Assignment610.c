#include <stdio.h>
int main()
{
    int lines, n = 1, spaces, tabs = 8, x, y = 1;
    for (lines = 1; lines <= 5; lines++)
    {
        for (spaces = 1; spaces <= tabs; spaces++)
            printf(" ");
        printf("%4d", n);
        if (lines >= 3)
        {
            for (x = 1; x <= y; x++)
            {
                if (x == 2 && y == 3)
                    printf("%4d", lines + 1);
                else
                    printf("%4d", lines - 1);
            }
            y++;
        }
        if (lines >= 2)
            printf("%4d", n);
        tabs = tabs - 2;
        printf("\n");
    }
    return 0;
}