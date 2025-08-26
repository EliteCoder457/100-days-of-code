// Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
int x;
printf("Enter the integer; ");
scanf("%d",&x);
if (x%2==0){
    printf("The integer is even");
}
else {
    printf("The integer is odd");
}
    return 0;
}
