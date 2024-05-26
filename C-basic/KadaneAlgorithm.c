
#include <stdio.h>
#include <stdlib.h>

int maxSubArraySum(int a[], int size)
{
    int max_so_far = -2147483648, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int n;
    int max = 0;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    max = maxSubArraySum(nums,n);
    printf("%d", max);
    return 0;
}
