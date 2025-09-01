// Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main() {
int x, r;
printf("enter the number of late days: ");
scanf("%d",&x);
if (1<x && x<=7){
    r=x*2;
    printf("Fine: %d",r);
}
if (7<x && x<=16){
    r=x*4;
    printf("Fine: %d",r);
}
if (16<x && x<=22){
    r=x*6;
    printf("Fine: %d",r);
}
if (22<x && x<=31){
    r=x*8;
    printf("Fine: %d",r);
}
    return 0;
}
