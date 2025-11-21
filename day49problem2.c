//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int lastSpaceIndex = -1;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpaceIndex = i;
    }
    printf("Output: ");
    if (lastSpaceIndex == -1) {  
        // Only one name
        printf("%s\n", str);
        return 0;
    }
    for (int i = 0; i < lastSpaceIndex; i++) {
        if (i == 0 && isalpha(str[i]))
            printf("%c. ", toupper(str[i]));

        if (str[i] == ' ' && isalpha(str[i + 1]))
            printf("%c. ", toupper(str[i + 1]));
    }
    printf("%s\n", str + lastSpaceIndex + 1);

    return 0;
}
