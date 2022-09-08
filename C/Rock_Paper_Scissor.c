#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int j = 0;

    while (1)
    {

        char pl;
        char c;
        int temp;
        int opt[] = {82, 114, 80, 112, 83, 115};

        printf("players turn\n");
        scanf("%c", &pl);
        getchar();
        printf("computers turn\n");
        srand(time(NULL));
        temp = rand() % 6;
        c = opt[temp];
        printf("Computer Choose: %c\n\n", c);

        if ((pl == 82 || pl == 114) && (c == 80 || c == 112))
        {
            j++;
            printf("computer wins.\n");
        }
        else if ((pl == 82 || pl == 114) && (c == 83 || c == 115))
        {
            i++;
        }
        else if ((pl == 80 || pl == 112) && (c == 83 || c == 115))
        {
            j++;
        }
        else if ((c == 82 || c == 114) && (pl == 80 || pl == 112))
        {
            i++;
            printf("player wins.\n");
        }
        else if ((c == 82 || c == 114) && (pl == 83 || pl == 115))
        {
            j++;
        }
        else if ((c == 80 || c == 112) && (pl == 83 || pl == 115))
        {
            i++;
        }
        else
        {
            i++;
            j++;
        }

        fflush(stdin);

        printf("players score: %d\ncomputers score: %d\n\n", i, j);

        if (i == 5 || j == 5)
        {
            goto end;
        }
    }
end:
    if (i == 5)
    {
        printf("Player Won");
    }
    else if (j == 5)
    {
        printf("Computer Won");
    }
    else
    {
        printf("Match Draw");
    }
}