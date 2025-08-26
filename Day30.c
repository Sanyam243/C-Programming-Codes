#include <stdio.h>

#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int data;
} Node;

typedef struct DoubleLL
{
    struct DoubleLL *next;
    struct DoubleLL *prev;
    int data;
} DoubleLL;

void traverseLinkedList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insertAtStart(Node **head, int val)
{

    // Step-1 Create a new node

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;

    newNode->next = NULL;

    // Step -2 Traverse No need

    // Step-3 Change the connections

    newNode->next = *head;
    *head = newNode;
}

void reverseLL(Node **head)
{

    Node *prev = NULL;
    Node *temp = *head;

    while (temp != NULL)
    {
        Node *nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }

    *head =prev;
}

int main()
{

    Node *head = NULL;
    insertAtStart(&head, 4);
    insertAtStart(&head, 3);
    insertAtStart(&head, 2);
    insertAtStart(&head, 1);

     reverseLL(&head);
    traverseLinkedList(head);
}