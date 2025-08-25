// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {

float principal, rate, t, si, ci, amount, time;
printf("Enter the principal amt: ");
scanf("%f",&principal);
printf("Enter the interest rate: ");
scanf("%f",&rate);
printf("Enter the time(in years): ");
scanf("%f",&time);
amount = principal * pow((1 + rate/100), time);
ci = amount - principal;

si=(principal*rate*time)/100;

printf("The simple interest is: %0.2f\n", si);
printf("The compound interest is: %0.2f\n", ci);

    return 0;
}
