// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

void reorderList(Node* head) 
{
    if(head==NULL or head->next==NULL or head->next->next==NULL) return ;
    
    //Find the Middle Element
    Node *slow=head, *fast=head, *t=NULL ; 
    while(fast and fast->next)
    {
        t=slow ;
        slow=slow->next ;
        fast=fast->next->next ;
    }
    t->next=NULL ;
    
    //Break the list into two parts
    //Reverse the latter half
    Node *curr=slow, *prev=NULL, *forward=NULL ;
    while(curr)
    {
        forward=curr->next ;
        curr->next=prev ;
        prev=curr ;
        curr=forward ;
    }
    
    //Merge the two halves using the algo below
    Node* temp=head ;
    while(temp)
    {
        if(temp->next==NULL)
        {
            temp->next=prev ;
            temp=NULL ;
            return ;
        }
        Node* p1=temp->next ;
        Node* p2=prev->next ;
        temp->next=prev ;
        prev->next=p1 ;
        temp=p1 ;
        prev=p2 ;
    }
}