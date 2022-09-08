#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int size;
    int f;
    int r;
    int *arr;
} queue;



int isfull(queue *qu)
{
    if ((qu->r+1)%qu->size == qu->f)
    {
        return 1;
    }
    return 0;
}

int isempty(queue *qu)
{
    if (qu->f == qu->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(queue *qu, int val)
{
    if (isfull(qu))
    {
        printf("Queue is full.\n");
    }
    printf("Enqueueing element: %d\n", val);
    qu->r = (qu->r+1) % qu->size;
    qu->arr[qu->r] = val;
}

int dequeue(queue *qu)
{
    if (isempty(qu))
    {
        printf("Dequeue failed queue is already empty.\n");
        return -1;
    }
    qu->f = (qu->f+1)%qu->size;
    return qu->arr[qu->f];
}
int peek(queue *qu, int index)
{
    if (index < 0|| index>qu->size)
    {
        return -1;
    }
    return qu->arr[(qu->f + index)%qu->size];
}

int main()
{
    queue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 5);
    enqueue(&q, 55);
    enqueue(&q, 45);
    enqueue(&q, 65);
    printf("Dequeueing element: %d\n",dequeue(&q));
    printf("Dequeueing element: %d\n",dequeue(&q));
    enqueue(&q, 85);
    enqueue(&q, 95);
    printf("Peeked element is: %d",peek(&q, 1));

    free(q.arr);
    return 0;
}