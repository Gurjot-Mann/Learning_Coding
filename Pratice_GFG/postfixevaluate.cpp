// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
#include <cstring>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    typedef struct stack
{
    int size;
    int top;
    int *arr;
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

void push(stack *ptr, int value)
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

int pop(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        printf("Stackunderflow\n");
        return -1;
    }
    else
    {
        int r;
        r = ptr->arr[ptr->top];
        ptr->top--;
        return r;
    }
}
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        int res;
        int temp;
        int o, se;
        stack *st = (stack *)malloc(sizeof(stack));
        st->size = s.size();
        st->top = -1;
        st->arr = (int *)malloc(st->size * sizeof(int));
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 48 && s[i] <= 57)
                push(st, s[i] - 48);
            else if(s[i] == '+')
            {
                o = pop(st);
                se = pop(st);
                temp = o+se;
                push(st, temp);
            }
             else if(s[i] == '-')
            {
                se = pop(st);
                o = pop(st);
                temp = o-se;
                push(st, temp);
            }
             else if(s[i] == '/')
            {
                se = pop(st);
                o = pop(st);
                temp = o/se;
                push(st, temp);
            }
             else if(s[i] == '*')
            {
                o = pop(st);
                se = pop(st);
                temp = o*se;
                push(st, temp);
            }
        }
        res = temp;
        return res;
        
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends