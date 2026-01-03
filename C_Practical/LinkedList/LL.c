#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void insertAtBegin(int value)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next= head;
    head = newNode;
}

void insertAtEnd(int value)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtValue(int value,int key)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head==NULL)
    {
        printf("Head is Null");
        return;
    }
    struct Node* temp = head ;
    while (temp->next!=NULL && temp->data != key )
    {
     temp = temp->next;   
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteAtBegin()
{
    if(head == NULL)    
    {
        printf("Head is null");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtEnd()
{
    if(head == NULL)
    {
        printf("Head is null");
        return;
    }
    struct Node* temp = head;
    struct Node* prev ;

    while(temp->next!=NULL)
    {
        prev= temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

void deleteAtSpecfic(int value)
{
    if(head == NULL)
    {
        printf("Head is null");
        return;
    }

    struct Node* temp = head;
    struct Node* prev;

    while(temp->next!=NULL && temp->data!=value)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);

}

void display()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertAtBegin(10);
    insertAtBegin(20);
    insertAtEnd(30);
    insertAtValue(40, 30);
    display();
    deleteAtBegin();
    display();
    deleteAtEnd();
    display();
    insertAtBegin(20);
    insertAtEnd(44);
    display();
    deleteAtSpecfic(10);
    display();
    return 0;
}
