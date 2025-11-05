#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char *ptr;
    int maxLen = 0, len = 0;
    char longest[1000], word[1000];

    // Read the input sentence
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline character if any

    ptr = str; // pointer to start of string

    while (*ptr != '\0') {
        // Skip leading spaces
        while (*ptr == ' ') {
            ptr++;
        }

        // Extract each word
        len = 0;
        while (*ptr != ' ' && *ptr != '\0') {
            word[len++] = *ptr;
            ptr++;
        }
        word[len] = '\0';

        // Check if this word is the longest
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s", longest);
    return 0;
}
