#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test 1 Output: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test 2 Output: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    return 0;
}