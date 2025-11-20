//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int freq[256] = {0};  
    int i = 0;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    while (s1[i] != '\0') {
        freq[(unsigned char)s1[i]]++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        freq[(unsigned char)s2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
