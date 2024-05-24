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


int towerBreakers(int n, int m) {
    if(m==1){
        return 2;
    }else if(n%2==1){
        return 1;
    }else{
        return 2;
    }
}

int main()
{
 return 0;
}
