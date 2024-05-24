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


  char* return_string_using_dynamic_allocation() {
      char* s = malloc(100 * sizeof(char));
 
      s = "dynamic allocation of string";
 
      return s;
  }
 
 
char* timeConversion(char* s) {
    int hh = (10 * (s[0] - '0')) + (s[1] - '0');
    if(s[8] == 'P' && hh < 12){
        hh += 12;
    }
    else if(s[8] == 'A' && hh == 12){
        hh = 0;
    }
    s[0] = ((hh / 10) + '0' );
    s[1] = ((hh % 10) + '0' );
    s[8] = '\0';
    return s;
}

int main()
{
return 0;
}
