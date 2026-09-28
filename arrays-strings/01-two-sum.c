#include <stdio.h>
#include <stdlib.h>

// LeetCode function
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }

    *returnSize = 0;
    return ans;
}

// Local testing
int main() {
    int returnSize;

    // Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int *res1 = twoSum(nums1, 4, 9, &returnSize);
    printf("Test 1 Output: [%d, %d]\n", res1[0], res1[1]);
    free(res1);

    // Test Case 2 (Edge Case)
    int nums2[] = {3, 3};
    int *res2 = twoSum(nums2, 2, 6, &returnSize);
    printf("Test 2 Output: [%d, %d]\n", res2[0], res2[1]);
    free(res2);

    return 0;
}