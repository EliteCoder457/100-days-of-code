//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation.\n");
        return 0;
    }
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);


    if (strstr(temp, s2))
        printf("Yes, it is a rotation.\n");
    else
        printf("No, not a rotation.\n");

    return 0;
}
