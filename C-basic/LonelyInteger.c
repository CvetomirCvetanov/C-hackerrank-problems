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

int lonelyinteger(int a_count, int* a) {
    int count, result;
    for(int i = 0; i<a_count; i++){
        count = 0;
        for(int j = 0; j<a_count; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count%2==1){
            result = a[i];
            break;
        }
    }
    return result;
}

int main()
{
return 0;
}
