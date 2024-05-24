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


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int suml = 0;
    int sumr = 0;
    for(int i = 0; i<arr_rows; i++){
        for(int j = 0; j<arr_rows; j++){
            if(i==j){
                suml+= arr[i][j];
            }
        }
    }
    int m = 0;
    for(int k = arr_rows-1; k>=0; k--){ 
        sumr+=arr[k][m];
        m++;
    }
    return abs(suml-sumr);
}

int main()
{
return0;
}
