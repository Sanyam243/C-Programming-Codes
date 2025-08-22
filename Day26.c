#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
    char name[50];
    int marks[5];
    int age;
} Person;

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
int main()
{
    /* Person p;
     strcpy(p.name, "Sanyam");

    Person* q;

    q = (Person*)malloc(sizeof(Person));

    q->age=3;
    strcpy(q->name, "Sanyam");*/

    Node *head = (Node *)malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;

    Node *a = (Node *)malloc(sizeof(Node));
    a->data = 2;
    a->next = NULL;

    head->next = a;

    Node *b = (Node *)malloc(sizeof(Node));
    b->data = 3;
    b->next = NULL;
    a->next = b;

    traverseLinkedList(head);
}
