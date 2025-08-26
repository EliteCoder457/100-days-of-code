//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int x;
    printf("Enter the integer: ");
    scanf("%d", &x);
    if (x>=0){
        if (x>0) {
            printf("The integer is positive");
        }
        else {
            printf("The integer is equal to zero");
        }
    }
    else {
        printf("The integer is negative");
    }
    return 0;
}
