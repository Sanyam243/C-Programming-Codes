#include <stdio.h>
#include <stdlib.h>


typedef struct Stack
{

    int top;
    int arr[100];
    int maxSize;

} Stack;

void intializeStack(Stack* s){
    s->top =-1;
    s->maxSize =4;
}

int isEmpty(Stack *s){

    if(s->top==-1){
        return 1;
    }

    return 0;


}

int overflow(Stack *s){

    if(s->top+1 == s->maxSize){
        return 1;
    }
    return 0;
}


void push(Stack *s,int val)
{
    if(overflow(s)){
        return;
    }

    (s->top)++;
    s->arr[s->top]=val;
}

int pop(Stack* s){

    if(isEmpty(s)){
        return -1; // There was nothing to delete
    }

    int element = s->arr[s->top];
    (s->top)--;
    return element;

}


int peek(Stack* s){
    if(isEmpty(s)){
        return -1; // There was nothing to peek
    }

    int element = s->arr[s->top];
    
    return element;
}

int size(Stack* s){
    return s->top+1;
}

    
   int  main()
{
    Stack* s = (Stack*)malloc(sizeof(Stack));
    intializeStack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    
    while(size(s)>0){
         printf("%d\n",pop(s));
    }
   

}