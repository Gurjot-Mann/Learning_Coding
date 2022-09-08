// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        vector<int> st;
        for(Node *ptr = head; ptr!= NULL; ptr = ptr->next)
        {
            st.push_back(ptr->data);
        }
        int j;
        for(int i = 1; i<st.size(); i++)
        {
           if(st[i-1]<st[i]) 
           {
               st[i-1] = -1;
           }
        }
        
        int k = 0;
        for(int j = 0; j<st.size(); j++)
        {
            if(st[j] != -1)
            {
                k = j;
                break;
            }
        }
        Node* res = new Node(st[k]);
        Node* ptr1 = res;
        for(int l = k+1; l<st.size(); l++)
        {
            if(st[l] != -1)
            {
                Node* temp = new Node(st[l]);
                ptr1->next = temp;
                ptr1 = ptr1->next;
            }
        }
        return res;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends