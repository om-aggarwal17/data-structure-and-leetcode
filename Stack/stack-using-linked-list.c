#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// Push function
void push(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack\n", value);
}

// Pop function
void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;

    printf("Deleted Element: %d\n", top->data);

    top = top->next;

    free(temp);
}

// Peek function
void peek()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", top->data);
}

// Display function
void display()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }

    struct Node *temp = top;

    printf("Stack Elements:\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n");
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
            printf("Program Ended\n");
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}