#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int numsSize) {
    printf("[");

    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);

        if (i < numsSize - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

int main() {
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test 1 Output: ");
    printArray(nums1, 5);

    // Test Case 2
    int nums2[] = {0};

    moveZeroes(nums2, 1);

    printf("Test 2 Output: ");
    printArray(nums2, 1);

    return 0;
}