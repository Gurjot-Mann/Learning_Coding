#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
} node;

int getheight(node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

node *createnode(int key)
{
    node *Node = (node *)malloc(sizeof(node));
    Node->key = key;
    Node->left = NULL;
    Node->right = NULL;
    Node->height = 1;
}

int max (int a, int b)
{
    return a>b?a:b;
}

int getbalancefactor(node *n)
{
    if (n == NULL)
        return 0;
    return getheight(n->left) - getheight(n->right);
}

node *rightrotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;

    return x;
}

node *leftrotate(node *x)
{
    node *y = x->right;
    node *T2 = y->right;

    y->left = x;
    x->right = T2;

    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;

    return y;
}

node *insert(node *node, int key)
{
    if (node == NULL)
        return (createnode(key));
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;

    node->height = 1 + max(getheight(node->left), getheight(node->right));
    int bf = getbalance(node);

    //left left case
    if (bf > 1 && key < node->left->key)
        return rightrotate(node);

    //right right case
    if (bf < -1 && key > node->right->key)
        return leftrotate(node);

    //left right case
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    //right left case
    if (bf < -1 && key < node->right->key)
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}

void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preorder(root);
    return 0;
}