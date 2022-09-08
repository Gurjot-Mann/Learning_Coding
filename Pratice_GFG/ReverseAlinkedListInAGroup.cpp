// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    node* reverseBetween(node* head, int m, int n)
    {
        if(head == NULL || m == n) return head;

        node* dummy = new node(0);
        dummy->next = head;
        node* newList = dummy;
        int pos = 1;
        while( pos < m){
            newList = newList->next;
            pos++;
        }

        node* workNode = newList->next;

        while(m < n){
            node* temp = workNode->next;
            workNode->next = temp->next;
            temp->next = newList->next;
            newList->next = temp;
            m++;
        }

        return dummy->next;
    }
    struct node *reverse (struct node *head, int k)
    { 
        node* rest = head;
        int l = 0;
        int j = k;
        int i = 1;
        for(node* ptr = head; ptr!= NULL; ptr = ptr->next)
        {
            l++;
        }
        while(j<=l)
        {
            rest = reverseBetween(rest, i, j);
            i = j+1;
            j = j+k;
        }
        if(j>l)
        {
            j = j-k;
            int p = l-j;
            j = j+p;
            rest = reverseBetween(rest, i, j);
        }
        return rest;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends