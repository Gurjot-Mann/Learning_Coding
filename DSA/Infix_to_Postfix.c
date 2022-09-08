#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int size;
    int top;
    char *arr;
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

void push(stack *ptr, char value)
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

char pop(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        printf("Stackunderflow\n");
    }
    else
    {
        char popped = ptr->arr[ptr->top];
        ptr->top--;
        return popped;
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
char stacktop(stack *sp)
{
    return sp->arr[sp->top];
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

int isoperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch =='/')
        return 1;
    else
        return 0;
}
char* infixp(char *infix)
{
    stack *sp = (stack*) malloc(sizeof(stack));
    sp->size = 25;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isempty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
    
}

int main()
{
    char *infixs = "a-b+t/6";
    printf("Postfix is %s", infixp(infixs));
    return 0;
}