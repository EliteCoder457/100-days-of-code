//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main (){

float x, y, z;
printf("First number: ");
scanf("%f",&x);
printf("Second number: ");
scanf("%f",&y);

z=x;
x=y;
y=z;
printf("%0.2f\n",x);
printf("%0.2f\n",y);


    return 0;
}
