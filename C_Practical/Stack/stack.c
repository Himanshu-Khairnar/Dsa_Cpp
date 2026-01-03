#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow");
        return;
    }

    top++;
    stack[top] = value;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow");
        return;
    }
    top--;
}

void peek()
{
    if (top == -1)
    {
        printf("Stack underflow");
        return;
    }

    printf("top element: %d", stack[top]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack underflow");
        return;
    }
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    printf("Pushing elements: 10, 20, 30, 40, 50\n");
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("\nDisplay stack:\n");
    display();

    printf("\n\nPeeking top element:\n");
    peek();

    printf("\n\nPopping element\n");
    pop();

    printf("\nDisplay stack after pop:\n");
    display();

    printf("\n\nPopping 2 more elements\n");
    pop();
    pop();

    printf("\nDisplay stack after 2 pops:\n");
    display();

    return 0;
}
