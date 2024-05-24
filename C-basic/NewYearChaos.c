#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);


void minimumBribes(int q_count, int* q) {
    int count = 0;
    int temp;
    int check = 0;
for(int i = q_count-1; i > 0; i--){
    if(q[i]!=i+1){
        if(q[i-1]==i+1){
            count++;
            temp = q[i-1];
            q[i-1] = q[i];
            q[i] = temp;
        }else if(q[i-2]==i+1){
            count+=2;
            temp = q[i-2];
            q[i-2] = q[i-1];
            q[i-1] = q[i];
            q[i] = temp;
        }else{
            printf("Too chaotic\n");
            check++;
            break;
        }
    }     
 }
 if(check==0){
 printf("%d\n", count);
 }
}


int main()
{
  return 0;
}
