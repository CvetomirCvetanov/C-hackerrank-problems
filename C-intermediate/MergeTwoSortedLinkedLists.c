
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void insert_end(Node** root, int value){
    Node* newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = value;
    
    Node* curr = *root;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = newNode;
}

Node* mergeList(Node* head1, Node* head2){
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;
    
    while(head1 != NULL && head2 != NULL){
        if(head1->data<=head2->data){
            tail->next = head1;
            head1 = head1->next;
        }else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    if(head1!=NULL){
        tail->next = head1;
    }else{
        tail->next = head2;
    }
    return dummy.next;
    
}
void printList(Node* head){
    while(head!=NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    int num1, num2;
    int value;
    scanf("%d", &num1);
    
    Node* root1 = malloc(sizeof(Node));
    scanf("%d", &root1->data);
    root1->next = NULL;
    
    for(int i = 1; i<num1; i++){
    scanf("%d", &value);
    insert_end(&root1, value);
    }
    
    scanf("%d", &num2);
    
    Node* root2 = malloc(sizeof(Node));
    scanf("%d", &root2->data);
    root2->next = NULL;
    
    for(int i = 1; i<num2; i++){
    scanf("%d", &value);
    insert_end(&root2, value);
    }
    
    Node* result = mergeList(root1, root2);
    
    printList(result);
   
    return 0;
}
