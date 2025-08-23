//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main (){
float Celsius, Farenheit;
printf("Enter the temprature in celsius: ");
scanf("%f",&Celsius);
Farenheit = (9/5 * Celsius) + 32;
printf("the temprature in farenheit is: %.2f/n ", Farenheit);


    return 0;
}
