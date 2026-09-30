#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char result[201];
    int i, j;

    result[0] = '\0';

    if (strsSize == 0) {
        return result;
    }

    for (i = 0; strs[0][i] != '\0'; i++) {
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != strs[0][i]) {
                result[i] = '\0';
                return result;
            }
        }

        result[i] = strs[0][i];
    }

    result[i] = '\0';

    return result;
}

int main() {
    // Test Case 1
    char *strs1[] = {"flower", "flow", "flight"};

    printf("Test 1 Output: %s\n",
           longestCommonPrefix(strs1, 3));

    // Test Case 2
    char *strs2[] = {"dog", "racecar", "car"};

    printf("Test 2 Output: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}