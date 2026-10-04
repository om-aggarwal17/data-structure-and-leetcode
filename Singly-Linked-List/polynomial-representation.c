#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int power;
    struct Node* next;
};

int main()
{
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    first->coeff = 5;
    first->power = 3;
    first->next = second;

    second->coeff = 4;
    second->power = 2;
    second->next = third;

    third->coeff = 2;
    third->power = 1;
    third->next = fourth;

    fourth->coeff = 7;
    fourth->power = 0;
    fourth->next = NULL;

    struct Node* temp = first;

    while(temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->power);

        if(temp->next != NULL)
        {
            printf(" + ");
        }

        temp = temp->next;
    }

    return 0;
}