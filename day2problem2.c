//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
float r, a, c;
printf("Enter the radius of the circle: ");
scanf("%f",&r);

a= (3.14*(r*r));
c= (2*3.14*r);
printf("The area of the circle is: %0.2f\n", a);
printf("The circumference of the circle is; %0.2f\n ", c);
    
    
    
    return 0;
    
}
