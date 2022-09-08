#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int size;
    int f;
    int r;
    int *arr;
}queue;

void queuetr(queue* qu)
{
    for (int i =  qu->f+1; i < qu->r+1; i++)
    {
        printf("Element: %d\n", qu->arr[i]);
    }
    printf("===========================================\n");
    
}

int isfull(queue* qu)
{
    if (qu->r == qu->size-1)
    {
        return 1;
    }
    return 0;
}

int isempty(queue* qu)
{
    if (qu->f == qu->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(queue* qu, int val)
{
    if (isfull(qu))
    {
        printf("Queue is full.");
    }
    qu->r++;
    qu->arr[qu->r] = val;
}

int dequeue(queue* qu)
{
    int a = -1;
    if (isempty(qu))
    {
        printf("Dequeue failed queue is already empty.");
    }
    else
    {
        qu->f++;
        a = qu->arr[qu->f];
    }
    return a;
}
int peek(queue* qu, int index)
{
    if (index < 0)
    {
        return -1;
    }
    return qu->arr[qu->f+index];
    
}

int main()
{
    queue q;
    q.size = 100;
    q.f = q.r =  0;
    q.arr = (int*) malloc(q.size *sizeof(int));

    //BFS implemantation.
    int node;
    int i = 0;
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i for exploration.
    while (!isempty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
        
    }
    


 return 0;
}