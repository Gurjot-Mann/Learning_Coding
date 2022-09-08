#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

    node* f = NULL;
    node* r = NULL;


void llt(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("=======================================================\n");
}

void enqueue(int val)
{
    node* n = (node*) malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next = n;
            r = n;
        }
        
    }
    
}

int dequeue()
{
    int val = -1;
    node* ptr = f;
    if(f==NULL)
    {
        printf("Queue is Empty.\n");
        return val;
    }
    f = f->next;
    val = ptr->data;
    free(ptr);
    return val;
}

int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    printf("Dequeuing element: %d\n", dequeue());

    llt(f);

 return 0;
}