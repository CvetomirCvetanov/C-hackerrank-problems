#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    va_list args;
    va_start(args, count);
    int s = 0;
    for(int i = 0; i<count; i++){
        int x = va_arg(args, int);
        s+=x;
    }
    va_end(args);
    return s;
}

int min(int count,...) {
    va_list args;
    va_start(args, count);
    int min = 2147483647;
    for(int i = 0; i<count; i++){
        int x = va_arg(args, int);
        if(min>x){
            min = x;
        }
    }
    va_end(args);
    return min;
}

int max(int count,...) {
    va_list args;
    va_start(args, count);
    int max = -2147483648;
    for(int i = 0; i<count; i++){
        int x = va_arg(args, int);
        if(max<x){
            max = x;
        }
    }
    va_end(args);
    return max;
}
int main(){
  return 0;
}
