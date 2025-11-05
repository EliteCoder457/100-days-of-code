#include <stdio.h>

int main() {
    int n, k;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    int temp[n];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    printf("array after rotating right by %d positions:", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
