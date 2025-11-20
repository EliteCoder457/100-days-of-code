//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int maxLen = 0, currLen = 0;
    char longest[100], current[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
            currLen++;
        } 
        else {
            current[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, current);
            }
            currLen = 0;
            j = 0;
        }
    }
    current[j] = '\0';
    if (currLen > maxLen) {
        strcpy(longest, current);
    }
    printf("Longest word: %s\n", longest);

    return 0;
}
