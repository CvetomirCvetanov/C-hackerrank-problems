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

void miniMaxSum(int arr_count, int* arr) {
    long sum = *arr;
    int min = *arr;
    int max = *arr;
    for(int i = 1; i < arr_count; i++){
        sum += *(arr + i);
        if(*(arr + i) > max){
            max = *(arr + i);
        }
        if(*(arr + i) < min){
            min = *(arr + i);
        }
    }
    printf("%ld %ld", sum - max, sum - min);
}

int main()
{
  return 0;
}
