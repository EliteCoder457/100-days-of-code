// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
float x, y, z;
printf("Enter the first number: ");
scanf("%f",&x);
printf("Enter the second number: ");
scanf("%f",&y);
printf("Enter the third number: ");
scanf("%f",&z);
if (x >= y && x >= z) {
        printf("The largest number is: %0.2f\n", x);
    } 
else if (y >= x && y >= z) {
        printf("The largest number is: %0.2f\n", y);
    } 
else {
        printf("The largest number is: %0.2f\n", z);
    }
    return 0;
}
