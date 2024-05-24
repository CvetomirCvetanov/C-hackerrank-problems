#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct{
    Node* top;
}Stack;

typedef struct{
    Stack s1, s2;
} Queue;

void initStack(Stack* stack){
    stack->top = NULL;
}

void initQueue(Queue* queue){
    initStack(&queue->s1);
    initStack(&queue->s2);
}

int isEmpty(Stack* stack){
    return stack->top==NULL;
}

void push(Stack* stack, int value){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Memory allocation error\n");
        return;
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack underflow\n");
        return -1;
    }
    Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedValue;
}

int peek(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

void enqueue(Queue* queue, int value){
    push(&queue->s1, value);
}

int dequeue(Queue* queue){
    if(isEmpty(&queue->s2)){
        while(!isEmpty(&queue->s1)){
            push(&queue->s2, pop(&queue->s1));
        }
    }
    return pop(&queue->s2);
}

int front(Queue* queue){
    if(isEmpty(&queue->s2)){
        while(!isEmpty(&queue->s1)){
            push(&queue->s2, pop(&queue->s1));
        }
    }
    return peek(&queue->s2);
}

int main() {
    int q;
    int type, x;
    scanf("%d", &q);
    
    Queue queue;
    initQueue(&queue);
    
    for(int i = 0; i<q; i++){
        scanf("%d", &type);
        switch(type){
            case 1:
                scanf("%d", &x);
                enqueue(&queue, x);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                printf("%d\n", front(&queue));
                break;
        }
    }
    return 0;
}
