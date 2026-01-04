#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create(int value)
{
    struct Node *n = malloc(sizeof(struct Node));
    n->data = value;
    n->left = n->right = NULL;
    return n;
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
void inorder(struct Node *n)
{
    if (n)
    {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}

int main(){
    struct Node* n = create(5);
    n->left = create(3);
    n->left->left = create(8);
    n->right = create(6);
    n->right->right = create(2);

    printf("preorder: \n");
    preorder(n);
    printf("\n");
    printf("inorder: \n");
    inorder(n);
    printf("\n");
    printf("postorder: \n");
    postorder(n);
    printf("\n");

}