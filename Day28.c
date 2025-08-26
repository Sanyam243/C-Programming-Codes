#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int data;
} Node;

void traverseLinkedList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
Node *insertAtStart(Node *head, int val)
{

    // Step-1 Create a new node

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;

    newNode->next = NULL;

    // Step -2 Traverse No need

    // Step-3 Change the connections

    newNode->next = head;
    return newNode;
}

Node *insertKthNodeFromStart(int k, Node *head, int val)
{

    if(k<=0){
         return insertAtStart(head,val);
        
        
    }
    // Step-1 Creation of node
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;

    newNode->next = NULL;

    

    // Step-2 Traversal to the right point

    int count = 0;

    Node *temp = head;

    while (count < k - 1 )
    {
        count++;
        temp = temp->next;
        if(temp==NULL){
        return head;
    }
    }
    
    

    Node *nextNode = temp->next;
    temp->next = newNode;
    newNode->next = nextNode;

    return head;
}
int main()
{

    Node *head = NULL;
    head = insertAtStart(head, 4);
    head = insertAtStart(head, 3);
    head = insertAtStart(head, 2);
    head = insertAtStart(head, 1);
    // traverseLinkedList(head);
    head = insertKthNodeFromStart(10, head, 5);
    traverseLinkedList(head);
}