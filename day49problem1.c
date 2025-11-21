//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    if (isalpha(str[0])) {
        printf("%c", toupper(str[0]));
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            printf("%c", toupper(str[i]));
        }
    }

    return 0;
}

