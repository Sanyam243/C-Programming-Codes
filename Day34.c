#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    struct Node* next;
    int data;
}Node;


typedef struct Stack{
    struct Node* top;
    int maxSize;
    int currSize;
}Stack;

void intializeStack(Stack* s){
    s->maxSize = 5;
    s->currSize = 0;
}

int isEmpty(Stack* s){
    return s->top==NULL;
}

int overflow(Stack* s){
    return s->currSize>=s->maxSize;
}

void push(int val, Stack* s){

    if(overflow(s)){
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = s->top; //s->top is the head of the linked list
    s->top = newNode;
    s->currSize++;
}

int pop(Stack *s){

    if(isEmpty(s))
        return -1;
    
    Node* newHead = s->top->next;
    int val = s->top->data;
    free(s->top);
    s->top = newHead;
    s->currSize--;
    return val;    
    
}

int peek(Stack* s){
     if(isEmpty(s))
        return -1;
    
    
    int val = s->top->data;
    return val; 
}

int size(Stack* s){
    return s->currSize;
}

int main(){

    Stack* s = (Stack*)malloc(sizeof(Stack));
    intializeStack(s);
    push(1,s);
    push(2,s);
    push(3,s);
    while(size(s)>0){
        printf("%d\n",pop(s));
    }

    
}
