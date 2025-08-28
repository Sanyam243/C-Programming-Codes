#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{

    int front;
    int back;
    int arr[100];
    int maxSize;

} Queue;

void intializeQueue(Queue *q)
{
    q->front = 0;
    q->back = -1;
    q->maxSize = 10;
}

int size(Queue *q)
{
    if(q->back<q->front){
        //Front gets ahead 
        return 0;
    }
    return q->back- q->front+1;
}

int isEmpty(Queue *q)
{
    if(size(q)==0){
        return 1;
    }
    return 0;
}

int overflow(Queue *q)
{
    if(size(q)==q->maxSize){
        return 1;
    }
    return 0;
}

void push(Queue *q, int val)
{

    if(overflow(q)){
        return;
    }

    (q->back)++;
    q->arr[q->back]= val;

}

int pop(Queue *q)
{
    if(isEmpty(q)){
        return -1;
    }

    int element = q->arr[q->front];
    (q->front)++;
    return element;
}

int peek(Queue *q)
{
     if(isEmpty(q)){
        return -1;
    }

    int element = q->arr[q->front];
    
    return element;
}



int main()
{

    Queue *q = (Queue*)malloc(sizeof(Queue));

    intializeQueue(q);
    push(q,1);
    push(q,2);
    push(q,3);
    pop(q);
    push(q,4);
    pop(q);
    pop(q);
    pop(q);
    pop(q);


    printf("%d",peek(q));
}