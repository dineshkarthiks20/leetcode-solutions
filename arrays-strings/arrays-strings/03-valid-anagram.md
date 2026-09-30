## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Use an array of 26 integers to count the frequency of each lowercase letter.
Increase the count for every character in the first string and decrease it for every character in the second string.
If all counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Two local test cases were executed successfully.