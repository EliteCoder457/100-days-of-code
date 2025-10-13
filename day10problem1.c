//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int a, b, c;
printf("enter length of side a: ");
scanf("%d",&a);
printf("enter length of side b: ");
scanf("%d",&b);
printf("enter length of side c: ");
scanf("%d",&c);
if(a==b && b==c && c==a){
    printf("The triangle is equilateral");
}
else if(a==b || b==c || a==c){
    printf("The triangle is isosceles");
}
else{
    printf("The triangle is scalene");
}
    return 0;
}
