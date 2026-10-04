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
    struct Node* forth; 
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = NULL;
    
    int key , found = 0;
    printf("Enter the Element which you want to search : ");
    scanf("%d",&key);

    struct Node* temp = head; 
    while(temp!=NULL){
        if(temp->data == key){
            found = 1;
        }
        temp = temp->next;
    }

    if(found==1){
        printf("Found");
    }else{
        printf("Not Found");
    }

    return 0;
}