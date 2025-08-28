#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

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
Node *addNodeAtEnd(int data, Node *head)
{
    // Assume head is not null means linked list is not empty
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    // Edge case
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Temp contains last node address
    temp->next = newNode;
    return head;
}

void aleternateNodes(Node *head)
{

    int arr[6];

    Node *temp = head;
    int i = 0;

    while (temp != NULL)
    {
        arr[i++] = temp->data;
        temp = temp->next;
    }

    temp = head;
    int n = i;
    i = 0;

    while (temp != NULL && i < n)
    {
        temp->data = arr[i];
        i += 2;
        temp = temp->next;
    }

    i = 1;

    while (temp != NULL && i < n)
    {
        temp->data = arr[i];
        i += 2;
        temp = temp->next;
    }
}

Node *alternateNodesLL(Node *head)
{

    Node *newHead = (Node *)malloc(sizeof(Node));
    newHead->data = head->data;
    newHead->next = NULL;

    Node *curr = newHead;          // This is for our new linked list
    Node *temp = head->next->next; // Traversal in orginal Linked list

    while (temp != NULL)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = temp->data;
        newNode->next = NULL;
        

        curr->next = newNode;
        curr = newNode;

        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next->next;
    }
    temp = head->next;

    while (temp != NULL)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = temp->data;
        newNode->next = NULL;
        

        curr->next = newNode;
        curr = newNode;

        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next->next;
    }

    return newHead;
}
int main()
{
    Node *head = NULL;
    head = addNodeAtEnd(1, head);
    head = addNodeAtEnd(2, head);
    head = addNodeAtEnd(3, head);
    head = addNodeAtEnd(4, head);
    head = addNodeAtEnd(5, head);
    head = addNodeAtEnd(6, head);
    head = addNodeAtEnd(7, head);
    // aleternateNodes(head);
    // traverseLinkedList(head);
    Node* newHead = alternateNodesLL(head);
    traverseLinkedList(newHead);
}