#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;   // No result found
    free(result);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* answer = twoSum(nums, 4, target, &returnSize);

    if (answer != NULL) {
        printf("Indices: %d and %d\n", answer[0], answer[1]);
        free(answer);  
    } else {
        printf("No two numbers add up to the target.\n");
    }

    return 0;
}
