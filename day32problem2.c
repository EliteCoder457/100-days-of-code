#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};  
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0)
        n = -n;
    while (n > 0) {
        digit = n%10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("the digit that occurs most frequently is: %d", maxDigit);
    printf("it occurs %d times.", maxCount);

    return 0;
}
