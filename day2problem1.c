//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
float l, b, a, p;
printf("Enter the Length of the Rectangle: ");
scanf("%f",&l);
printf("Enter the Breadth of the Rectangle: ");
scanf("%f",&b);

a=(l*b);
p=(l+b);
printf("The Area of the Rectangle is: %0.2f\n", a);
printf("The Pereimeter of the Rectangle is: %0.2f\n",p);
    
    
    
 return 0;
 
}
