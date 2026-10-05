#include <stdio.h>

int n = 5;
int stack[];
int top = -1;

// Push function
void push(int value)
{
    if (top == n - 1)
    {
        printf("Stack Overflow");
        return;
    }

    top++;
    stack[top] = value;
}

// Pop function
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
        return;
    }
    printf("Deleted Element : %d", stack[top]);
    top--;
}

// Peek function
void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty");
        return;
    }
    printf("The top Element : %d", stack[top]);
}

// Display function
void display()
{
    if (top == -1)
    {
        printf("Stack is Empty");
        return;
    }

    printf("Stack Elements :- \n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int ch;

    printf("Enter choice:\n");
    printf("1 -> Push\n");
    printf("2 -> Pop\n");
    printf("3 -> Peek\n");
    printf("4 -> Display\n");
    printf("0 -> Exit\n");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        int val;

        printf("Enter value: ");
        scanf("%d", &val);

        push(val);
        break;
    }

    case 2:
        pop();
        break;

    case 3:
        peek();
        break;

    case 4:
        display();
        break;

    case 0:
        return 0;

    default:
        printf("Invalid choice");
    }

    return 0;
}