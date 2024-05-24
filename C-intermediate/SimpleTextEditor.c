#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_OPS 1000000

typedef struct{
    char *states[MAX_OPS];
    int top;
}Stack;

void initStack(Stack *stack){
    stack->top = -1;
}

void push(Stack *stack, const char *state){
    stack->top++;
    stack->states[stack->top] = strdup(state);
}

char *pop(Stack *stack){
    if(stack->top==-1){
        return NULL;
    }
    char *state = stack->states[stack->top];
    stack->top--;
    return state;
}

int main() {
    char S[MAX_OPS +1] = "";
    Stack stack;
    initStack(&stack);
    
    int Q;
    scanf("%d", &Q);
    
    for(int i = 0; i<Q; ++i){
        int operation;
        scanf("%d", &operation);
        
        if(operation ==1){
            char W[MAX_OPS+1];
            scanf("%s", W);
            push(&stack, S);
            strcat(S, W);
        }else if(operation == 2){
            int k;
            scanf("%d", &k);
            push(&stack, S);
            int len = strlen(S);
            S[len-k] = '\0';
        }else if(operation == 3){
            int k;
            scanf("%d", &k);
            printf("%c\n", S[k-1]);
        }else if(operation == 4){
            char *prevState = pop(&stack);
            if(prevState){
                strcpy(S, prevState);
                free(prevState);
            }
        }
    }
    while(stack.top!=-1){
        free(pop(&stack));
    }  
    return 0;
}
