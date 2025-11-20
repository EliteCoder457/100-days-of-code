//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[200];
    int freq[26] = {0};   // only for lowercase a–z
    int i = 0;
    printf("Enter a lowercase string: ");
    gets(str);
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {     // already seen once → repeating
                printf("First repeating lowercase alphabet: %c", ch);
                return 0;
            }
            freq[ch - 'a']++;              // mark occurrence
        }
        i++;
    }
    printf("No repeating lowercase alphabet found.");
    return 0;
}
