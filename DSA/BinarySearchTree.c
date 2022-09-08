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

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(node* root)
{
    static node* prev = NULL;
    if (root!=NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

node* search(node* root, int key)
{
    if(root==NULL)
        return NULL;
    if(root->data == key)
        return root;
    else if(root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

node* searchiter(node* root, int key)
{
    while(root!=NULL)
    {
        if(key==root->data)
            return root;
        else if(key<root->data)
            root = root->left;
        else
            root = root->right;
    }
    return NULL;
}

void insert(node* root, int key)
{
    node* prev = NULL;
    while(root!=NULL)
    {
        prev = root;
        if(key==root->data)
        {
            printf("Cannot insert %d already in BST", key);
            return;
        }
        else if(key<root->data)
            root = root->left;
        else
            root = root->right;
    }
    node* new = createnode(key);
    if(key<prev->data)
        prev->left = new;
    else
        prev->right = new;
}

node* inorderpredecessor(node* root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
    
}

node* deletenode(node* root, int value)
{
    node* ipre;
    if(root==NULL)
        return NULL;
    if(root->right == NULL && root->left == NULL)
    {
        free(root);
        return NULL;
    }
    //search for the node to be deleted.
    if(value<root->data)
    {
        root->left = deletenode(root->left, value);
    }
    else if(value>root->data)
    {
        root->right = deletenode(root->right, value);
    }
    //deletion stratergy when the node is found.
    else
    {
        ipre = inorderpredecessor(root);
        root->data = ipre->data;
        root->left = deletenode(root->left, ipre->data);
    }
    return root;

}
int main()
{
    node *p = createnode(5);
    node *p1 = createnode(3);
    node *p2 = createnode(6);
    node *p3 = createnode(1);
    node *p4 = createnode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);

       /*
            5
           / \
          3   6
         / \
        1   4  
        */

    // printf("\n%d\n",isBST(p));

    // printf("Searched data is %d\n", search(p,1)->data);
    // printf("Searched data is %d\n", searchiter(p,1)->data);

    // insert(p,7);
    // printf("\n%d\n",p->right->right->data);
    // inorder(p);

    deletenode(p, 3);
    printf("\n");
    inorder(p);

    

    return 0;
}