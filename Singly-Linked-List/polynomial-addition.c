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
    // Polynomial 1: 5x^3 + 4x^2 + 2
    struct Node *p1, *p2, *p3;
    
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p3 = (struct Node*)malloc(sizeof(struct Node));

    p1->coeff = 5;
    p1->power = 3;
    p1->next = p2;

    p2->coeff = 4;
    p2->power = 2;
    p2->next = p3;

    p3->coeff = 2;
    p3->power = 0;
    p3->next = NULL;


    // Polynomial 2: 3x^3 + 2x^2 + 7
    struct Node *q1, *q2, *q3;
    
    q1 = (struct Node*)malloc(sizeof(struct Node));
    q2 = (struct Node*)malloc(sizeof(struct Node));
    q3 = (struct Node*)malloc(sizeof(struct Node));

    q1->coeff = 3;
    q1->power = 3;
    q1->next = q2;

    q2->coeff = 2;
    q2->power = 2;
    q2->next = q3;

    q3->coeff = 7;
    q3->power = 0;
    q3->next = NULL;


    // Addition
    struct Node *temp1 = p1;
    struct Node *temp2 = q1;

    printf("Result: ");

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->power == temp2->power)
        {
            printf("%dx^%d", temp1->coeff + temp2->coeff, temp1->power);

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return 0;
}