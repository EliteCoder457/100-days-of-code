#include <stdio.h>

int main() {
    int n, pos, element;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("invalid position");
        return 0;
    }
    printf("enter the element to insert: ");
    scanf("%d", &element);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
    printf("array after insertion:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
