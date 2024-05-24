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

int main(){
    int n;
    int flag = 0;
    int size;
    scanf("%d", &n);
    char s[1001];
    char stack[1001];
    int top;
    for(int i = 0; i<n; i++){
        scanf("%s", s);
        size = strlen(s);
        top = -1;
        if(size%2==1){
            printf("NO\n");
            continue;
        }
        if(s[0]==')'||s[0]=='}'||s[0]==']'){
            printf("NO\n");
            continue;
        }
        for(int j = 0; j<size;j++){
            if(s[j]=='('||s[j]=='{'||s[j]=='['){
                top++;
                stack[top] = s[j];
            }else if(s[j]==')'&&stack[top]=='('){
                stack[top] = '\0';
                top--;
            }else if(s[j]=='}'&&stack[top]=='{'){
                stack[top] = '\0';
                top--;
            }else if(s[j]==']'&&stack[top]=='['){
                stack[top] = '\0';
                top--;
            }else{
                top++;
                break;
            }
        }
        if(top!=-1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
        
        strcpy(s, "");
        strcpy(stack, "");
    }
    return 0;
}
