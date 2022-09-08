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
char stacktop(stack* sp)
{
    return sp->arr[sp->top];
}

int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
    
}

int parenthesismatch(char* exp)
{
    stack* sp;
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0;exp[i]!='\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
           push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(isempty(sp))
            return 0;
        
         popped_ch = pop(sp);
           if(!match(popped_ch, exp[i]))
           {
               return 0;
           }
        }
    }
    if (isempty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    free(sp->arr);
    
}

int main()
{
    char* exp = "8*{(9)}";
    if (parenthesismatch(exp))
    {
        printf("The Parenthesis is balanced.");
    }
    else
    {
        printf("The parenthesis is not balanced.");
    }
    
    
    return 0;
}