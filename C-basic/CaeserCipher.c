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
    int n, k, ascii;
    int count = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    scanf("%d", &k);
    k = k%26;
    for(int i = 0; i<n; i++){
        ascii = s[i];
        if(ascii>=97&&ascii<=122){
            ascii = ascii+k;
            if(ascii>122)
            printf("%c", ascii-26);
            else
            printf("%c", ascii);
        }else if(ascii>=65&&ascii<=90){
            ascii = ascii+k;
            if(ascii>90)
            printf("%c", ascii-26);
            else
            printf("%c", ascii);
        }else{
            printf("%c", ascii);
        }
    }
    return 0;
}
