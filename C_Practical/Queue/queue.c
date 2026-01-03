#include <stdio.h>

#define MAX 100

int queue[MAX];
int rear = -1, front = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Overflow");
        return;
    }

    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow");
        return;
    }

    front++;
}

void peek()
{
    if (front == -1 )
    {
        printf("Underflow");
        return;
    }
    printf("Front element: %d",queue[front]);
}

void display()
{
    if (front == -1 )
    {
        printf("Underflow");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

int main()
{
    printf("Enqueuing elements: 10, 20, 30, 40, 50\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    printf("Current Queue: \n");
    display();

    printf("\nDequeuing two elements\n");
    dequeue();
    dequeue();

    printf("Current Queue after dequeue operations: \n");
    display();

    printf("\nPeeking front element:\n");
    peek();

    return 0;
}
