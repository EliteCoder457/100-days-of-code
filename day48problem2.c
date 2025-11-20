//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
int main() {
    char s[200];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    int i = 0, start = 0;

    while (s[i] != '\0') {
        
        if (s[i] != ' ' && (i == 0 || s[i-1] == ' '))
            start = i;
        if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0'))
            reverse(s, start, i);

        i++;
    }

    printf("Reversed words: %s", s);
    return 0;
}
