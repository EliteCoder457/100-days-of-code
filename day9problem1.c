//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, x, y, d;
printf("enter the coeff of x^2: ");
scanf("%d",&a);
printf("enter the coeff of x: ");
scanf("%d",&b);
printf("enter the constant term: ");
scanf("%d",&c);
d=sqrt((b*b)-4*(a*c));
x= ((-b+d)/2*a);
y= ((-b-d)/2*a);
if (d>0){
    printf("roots are real and different: \n");
    printf("roots are : %d,%d", x, y);
if(d==0){
    printf("roots are real and equal\n");
    printf("roots are : %d,%d", x, y);
}
}

else{
    printf("the roots are imaginary\n");
}




    
    return 0;

}
