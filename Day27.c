#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void traverseLinkedList(Node* head){

    Node* temp = head;
     while(temp!=NULL){
        printf("%d ",temp->data);
        temp =temp->next;
     }
}
Node* addNodeAtEnd(int data,Node* head){
    //Assume head is not null means linked list is not empty
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data= data;
    newNode->next=NULL;
    //Edge case
    if(head==NULL){
        head= newNode;
        return head;
    }

    Node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;

    }

    //Temp contains last node address
    temp->next = newNode;
    return head;
}
int main()
{
    /*Node* head = (Node*)malloc(sizeof(Node));
    head->data =1;
    head->next =NULL;
    addNodeAtEnd(2,head);
    addNodeAtEnd(3,head);
    traverseLinkedList(head);*/

    Node* head =NULL;
    head = addNodeAtEnd(1,head);
    traverseLinkedList(head);
}