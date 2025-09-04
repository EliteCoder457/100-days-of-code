// Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main() {
int x, r;
printf("enter the number of late days: ");
scanf("%d",&x);
if (1<=x && x<=5){
    r=x*2;
    printf("Fine: ₹%d",r);
}
if (5<x && x<=10){
    r=x*4;
    printf("Fine: ₹%d",r);
}
if (10<x && x<=30){
    r=x*6;
    printf("Fine: ₹%d",r);
}
if (x==31){
   
    printf("Membership cancelled");
}
    return 0;
}
