#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void enqueue(Node** new_stack, int x) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->value = x;
    new_node->next = *new_stack;
    *new_stack = new_node;
}

void shifting(Node** new_stack, Node** old_stack) {
    while (*new_stack != NULL) {
        Node* temp = *new_stack;
        *new_stack = (*new_stack)->next;
        temp->next = *old_stack;
        *old_stack = temp;
    }
}


void dequeue(Node** old_stack) {
    if (*old_stack != NULL) {
        Node* temp = *old_stack;
        *old_stack = (*old_stack)->next;
        free(temp);
    }
}

int main() {
    Node* newest = NULL;
    Node* oldest = NULL;
    int n, q, x;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &q);
        switch (q) {
            case 1:
                scanf("%d", &x);
                enqueue(&newest, x);
                break;
            case 2:
                if (oldest == NULL) {
                    shifting(&newest, &oldest);
                }
                dequeue(&oldest);
                break;
            case 3:
                if (oldest == NULL) {
                    shifting(&newest, &oldest);
                }
                if (oldest != NULL) {
                    printf("%d\n", oldest->value);
                } else {
                    printf("Queue is empty\n");
                }
                break;
        }
    }
    
    
    return 0;
}
