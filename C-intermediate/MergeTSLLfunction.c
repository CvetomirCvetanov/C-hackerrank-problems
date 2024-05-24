#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode dummy;
    SinglyLinkedListNode *tail = &dummy;
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
int main(){
return 0;
}
