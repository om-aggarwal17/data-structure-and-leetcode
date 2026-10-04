#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third; 
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    struct Node* temp = head;
    struct Node* deletedNode; 

    int pos = 2;
    for(int i = 1 ; i<pos-1 ; i++){
        temp = temp->next;
    }
    
    deletedNode = temp->next;
    temp->next = temp->next->next;

    free(deletedNode);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}