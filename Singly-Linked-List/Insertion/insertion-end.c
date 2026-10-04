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
    struct Node* newNode;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;

    newNode->data = 40;
    newNode->next = NULL;
    
    struct Node* temp = head; 
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    temp = head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}