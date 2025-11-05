#include <stdio.h>

int main() {
    int n, element, pos;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the element to insert: ");
    scanf("%d", &element);

    // Find position where element should be inserted
    pos = n;
    for (int i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    printf("array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
