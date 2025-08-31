//Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>
int main(){
float p, l, c, s, percentage;
printf("Enter the cost price: ");
scanf("%f",&c);
printf("Enter the selling price: ");
scanf("%f",&s);
if (s > c) {
    p = s - c;
    percentage = (p / c) * 100;
    printf("Profit = %.2f\n", p);
    printf("Profit Percentage = %.2f%%", percentage);
}
else if (c > s) {
    l = c - s;
    percentage = (l / c) * 100;
    printf("Loss = %.2f\n", l);
    printf("Loss Percentage = %.2f%%", percentage);
    } 
else {
    printf("No Profit, No Loss.");
} 
    
    return 0;
}
