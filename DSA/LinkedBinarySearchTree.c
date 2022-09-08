#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createnode(int data)
{
    node *n;
    n = (node *)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{ /*
    node* p;
    p = (node*) malloc(sizeof(node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    node* p1;
    p1 = (node*) malloc(sizeof(node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    node* p2;
    p2 = (node*) malloc(sizeof(node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    p->left = p1;
    p->right = p2;
    */
    node *p = createnode(4);
    node *p1 = createnode(1);
    node *p2 = createnode(6);
    node *p3 = createnode(5);
    node *p4 = createnode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);

    return 0;
}