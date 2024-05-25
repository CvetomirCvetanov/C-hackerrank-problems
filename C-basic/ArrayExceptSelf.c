#include <stdio.h>

int multiplication(int arr[], int i, int n){
    int mnum = 1;
    for(int j = 0; j<n; j++){
        if(arr[j]==arr[i]){
            continue;
        }
        mnum = mnum*arr[j];
    }
    return mnum;
}

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    int new_nums[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i<n; i++){
        new_nums[i] = multiplication( nums, i, n);
    }
    
    printarray(new_nums, n);
    
    return 0;
}
