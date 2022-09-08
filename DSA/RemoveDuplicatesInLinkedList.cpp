// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

 // } Driver Code Ends
//User function Template for C++

/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        
        struct Node* ptr = head;
        struct Node* prev = head;
        while(ptr!=NULL)
        {
            if(ptr == head)
            {
                if(head->data == head->next->data)
                    head = ptr->next->next;
                
                else 
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
            }
            else
            {
                if(ptr->data == ptr->next->data)
                {
                    prev->next = ptr->next->next;
                    
                    ptr = ptr->next->next;
                }
                else
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
            }
        }
        return head;
    }
};

// { Driver Code Starts.
/* Function to print linked list */




// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}
  // } Driver Code Ends