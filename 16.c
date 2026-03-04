#include <stdio.h>

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;  // Important when k > n
    
    reverse(nums, 0, numsSize - 1);       // Step 1
    reverse(nums, 0, k - 1);              // Step 2
    reverse(nums, k, numsSize - 1);       // Step 3
}
