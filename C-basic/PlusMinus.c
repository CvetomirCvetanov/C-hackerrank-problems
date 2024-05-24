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

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int* arr) {
    int neg_count = 0;
    int pos_count= 0;
    int zero_count = 0;
    float sum = 0;
    for(int i = 0; i < arr_count; i++){
        if(*(arr+i)<0){
            neg_count++;
        }else if(*(arr+i)==0){
            zero_count++;
        }else{
            pos_count++;
        }
    }
    sum = pos_count+zero_count+neg_count;
    float neg = neg_count/sum;
    float pos = pos_count/sum;
    float zero = zero_count/sum;
    printf("%1.6lf\n", pos);
    printf("%1.6lf\n", neg);
    printf("%1.6lf\n", zero);
}

int main()
{
return 0;
}
