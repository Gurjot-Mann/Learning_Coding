#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
}node;

void llt(node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("=======================================================\n");
}

int isfull(node* top)
{
    node* p = (node*) malloc(sizeof(node));
    if (p==NULL)
    {
        return 1;
    }
    return 0;
    
}

int isempty(node* top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
    
}

node* push(node* top, int value)
{
    if (isfull(top))
    {
        printf("Stackoverflow\n");
    }
    node* n = (node*)malloc(sizeof(node));
    n->data = value;
    n->next = top;
    top = n;
    return top;
}

int pop(node** top)
{
    if (isempty(*top))
    {
        printf("Stackunderflow\n");
    }
    node* n;
    n = *top;
    *top = (*top)->next;
    int x = n->data;
    free(n);
    return x;
}
int peek(node* ptr, int index)
{
    node *ptr1 = ptr;
    for (int i = 0;( i < index-1 && ptr1 != NULL); i++)
    {
        ptr1 = ptr1->next;
    }
    if (ptr1 !=NULL)
    {
        return ptr1->data; 
    }
    else
    {
        return -1;
    }
    
    
    
}


int main(){
    node* top = NULL;
    top = push(top, 55);
    top = push(top, 15);
    top = push(top, 20);
    top = push(top, 40);
    llt(top);
    int a =pop(&top);
    a = pop(&top);
    llt(top);
    printf("%d", peek(top, 2));
 return 0;
}