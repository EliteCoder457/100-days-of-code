// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
float x, y, a, s, m, q;
printf("Enter the greater number: ");
scanf("%f", &x);
printf("Enter the smaller number: ");
scanf("%f", &y);
a = (x+y);
s = (x-y);
m = (x*y);
printf("Sum: %0.2f\n",a);
printf("Diff: %0.2f\n",s);
printf("Product: %0.2f\n",m);

if (y==0){
    printf("Quotient: not defined");
}
else {
    q =(x/y);
    printf("Quotient: %f\n ",q);
}

    return 0;
}
