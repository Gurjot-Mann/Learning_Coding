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

struct node* freefirst(struct node* head)
{
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node* freebtw(struct node* head, int index)
{
    struct node* ptr = head;
    for (int i = 0; i < index-1; i++)
    {
        ptr = ptr->next;
    }
    struct node* delete = ptr->next;
    ptr->next = delete->next;
   
    free(delete);

    return head;
}

struct node* freelast(struct node* head)  
{
    struct node* ptr = head;
    struct node* pp = head->next;

    while (pp->next != NULL)
    {
        ptr = ptr->next;
        pp = pp->next;
    }
    ptr->next = NULL;
    free(pp);
    return head;  
}

struct node* freevalue(struct node* head, int value)
{
    struct node* ptr = head;
    struct node* pp = head->next;

    while (pp->data != value && pp != NULL)
    {
        ptr = ptr->next;
        pp = ptr->next;
    }
    if (pp->data == value)
    {
        ptr->next = pp->next;
        free(pp);
        return head;
    }
    
    

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

    // head = freefirst(head);
    // llt(head);

    // head = freebtw(head, 2);
    // llt(head);

    // head = freelast(head);
    // llt(head);

    head = freevalue(head, 7);  
    llt(head);


}