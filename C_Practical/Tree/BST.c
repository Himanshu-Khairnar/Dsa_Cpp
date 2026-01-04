#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *insert(struct Node *n, int val)
{
    if (!n)
    {
        n = malloc(sizeof(struct Node));
        n->data = val;
        n->left = n->right = NULL;
        return n;
    }
    if (n->data >val)
        n->left = insert(n->left, val);
    else if (n->data < val)
        n->right = insert(n->right, val);

    return n;
}

void inorder(struct Node *n)
{
    if (n)
    {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}
void preorder(struct Node *n)
{
    if (n)
    {
        printf("%d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
void postorder(struct Node *n)
{
    if (n)
    {
        postorder(n->left);
        postorder(n->right);
        printf("%d ", n->data);
    }
}

int main(){
    struct Node* root = NULL;
    int a[] = {50,30,70,20,40,60,80};
    for(int i=0;i<7;i++)
    {
        root = insert(root,a[i]);
    }

    printf("preorder: \n");
    preorder(root);
    printf("\n");
    printf("inorder: \n");
    inorder(root);
    printf("\n");
    printf("postorder: \n");
    postorder(root);
    printf("\n");
}