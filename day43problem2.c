//Check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[j] != '\0') {
        j++;
    }
    j--; 
    int flag = 1;
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
