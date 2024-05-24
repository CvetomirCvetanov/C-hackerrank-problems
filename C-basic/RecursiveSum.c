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
int digitSum(long long num){
    int newSum = 0;
    while(num>=1){
        newSum+=num%10;
        num = num/10;
    }
    return newSum;
}
int main()
{
    char n[100001];
    int m[100001];
    int k;
    long long sum = 0;
    scanf("%s %d", n, &k);
    int size = strlen(n);
    for (int j = 0; n[j]!=0; j++){
    m[j] = n[j] - '0';
    }
    for(int i = 0; i<size; i++){
      sum+=m[i];
    }
    sum = sum*k; 
    if(sum>9){
    while(sum>9){
        sum = digitSum(sum);
    }
       printf("%lld", sum); 
    }else{
       printf("%lld", sum); 
    }
    return 0;
}

