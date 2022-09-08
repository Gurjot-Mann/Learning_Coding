#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

int isempty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int value)
{
    if (isfull(ptr) == 1)
    {
        printf("stackoverflow, cannot push %d\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        printf("Stackunderflow\n");
    }
    else
    {
        ptr->top--;
    }
}
int peek(stack *ptr, int i)
{
    if ((ptr->top - i + 1) < 0)
    {
        printf("not a valid position");
        return -1;
    }
    else
    {
        return ptr->arr[(ptr->top - i + 1)];
    }
    
    
}

int main()
{
    // stack s;
    // s.size = 50;
    // s.top = -1;
    // s.arr = (int*) malloc(s.size * sizeof(int));

    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 5);
    push(s, 10);
    push(s, 20);
    push(s, 25); 

    pop(s);

    push(s, 15);
   
    printf("%d",peek(s,1));

    free(s->arr);
    free(s);
    return 0;
}