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

void dequeue(queue* qu)
{
    if (isempty(qu))
    {
        printf("Dequeue failed queue is already empty.");
    }
    qu->f++; 
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
    q.size = 10;
    q.f = q.r =  -1;
    q.arr = (int*) malloc(q.size *sizeof(int));

    enqueue(&q, 5);
    enqueue(&q, 55);
    enqueue(&q, 45);
    enqueue(&q, 65);
    dequeue(&q);
    dequeue(&q);
    queuetr(&q);
    printf("The peeked element: %d",peek(&q, 1));


    free(q.arr);
 return 0;
}