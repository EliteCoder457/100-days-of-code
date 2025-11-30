//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int lastIndex[256]; 
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

       
        if(lastIndex[(int)c] >= start)
            start = lastIndex[(int)c] + 1;

        lastIndex[(int)c] = i;

        int currentLen = i - start + 1;
        if(currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
