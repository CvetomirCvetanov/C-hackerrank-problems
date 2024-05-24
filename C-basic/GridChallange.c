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
    int t, n;
    int min_idx;
    scanf("%d", &t);
    for(int testcase = 0; testcase<t; testcase++){
    int flag = 0;
    scanf("%d", &n);
    char grid[n][n];
    for(int i = 0; i<n; i++){
    scanf("%s", grid[i]);
    }
    int m;
    char key;
    for(int j = 0; j<n; j++){
        for (int i = 1; i < n; i++) {
        key = grid[j][i];
        m = i - 1;

        
        while (m >= 0 && grid[j][m] > key) {
            grid[j][m + 1] = grid[j][m];
            m = m - 1;
        }
        grid[j][m + 1] = key;
    }
    }
    
    for(int p = 0; p<n; p++){
        for (int o = 0; o < n-1; o++){
        min_idx = o;
        for (int q = o+1; q < n; q++){
          if (grid[q][p] < grid[min_idx][p])
            min_idx = q;
           if(min_idx != o){
            flag++;
           }
        }    
        }
    }
    if(flag == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }
    return 0;
}
