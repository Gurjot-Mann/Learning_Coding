#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void llt(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("=======================================================\n");
}
struct node *insertfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *insertindex(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *pointer = head;

    for (int i = 0; i < index - 1; i++)
    {
        pointer = pointer->next;
    }

    ptr->data = data;
    ptr->next = pointer->next;
    pointer->next = ptr;

    return head;
}
struct node *insertend(struct node *head, int data)
{
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    struct node *pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    ptr1->data = data;
    ptr1->next = pointer->next;
    pointer->next = ptr1;

    return head;
}

struct node *insertafter(struct node *head, struct node *prev, int data)
{
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    
    ptr1->data = data;
    ptr1->next = prev->next;
    prev->next = ptr1;

    return head;
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 11;
    third->next = NULL;
    llt(head);

    head = insertfirst(head, 1);
    llt(head);

    head = insertindex(head, 2, 8);
    llt(head);

    head = insertend(head, 12);
    llt(head);

    head = insertafter(head, second, 18);//will work when above commented out.
    llt(head);

    return 0;
}