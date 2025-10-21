#include <stdio.h>

int main() {
    int n, x, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element %d found at position %d\n", x, i + 1);
            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}
