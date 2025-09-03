#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node{
    struct Node* next;
    char data;
}Node;


typedef struct Stack{
    struct Node* top;
    int maxSize;
    int currSize;
}Stack;

void intializeStack(Stack* s){
    s->maxSize = 15;
    s->currSize = 0;
    s->top = NULL;
}

int isEmpty(Stack* s){
    return s->top==NULL;
}

int overflow(Stack* s){
    return s->currSize>=s->maxSize;
}

void push(char val, Stack* s){

    if(overflow(s)){
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = s->top; //s->top is the head of the linked list
    s->top = newNode;
    s->currSize++;
}

char pop(Stack *s){

    if(isEmpty(s))
        return ' ';
    
    Node* newHead = s->top->next; //Random when there is only one element left
    char val = s->top->data;
    free(s->top);
    s->top = newHead;
    s->currSize--;
    return val;    
    
}

char peek(Stack* s){
     if(isEmpty(s))
        return ' ';
    
    
    char val = s->top->data;
    return val; 
}

int size(Stack* s){
    return s->currSize;
}

int isBalancedParenthesis(char par[]){
    Stack* s = (Stack*)malloc(sizeof(Stack));
    intializeStack(s);
    int n = strlen(par);

    for(int i=0;i<n;i++){
        //(
        if(par[i]=='('){
            push('(',s);
        }else{
            
            if(isEmpty(s)){
                return 0;
            }
            pop(s);
        }

        //printf("%d\n",size(s));
    }

    if(size(s)>0){
        return 0;
    }

    return 1;
    
}

int main(){

    

    char par[15]="(())()";

    printf("%d",isBalancedParenthesis(par));


    

    
}
