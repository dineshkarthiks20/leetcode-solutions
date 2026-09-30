#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1
    char s1[] = "hello";
    int size1 = strlen(s1);

    reverseString(s1, size1);

    printf("Test 1 Output: %s\n", s1);

    // Test Case 2 - single character
    char s2[] = "a";
    int size2 = strlen(s2);

    reverseString(s2, size2);

    printf("Test 2 Output: %s\n", s2);

    return 0;
}

