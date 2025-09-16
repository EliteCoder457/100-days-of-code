//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
int n,sum=0,ld=0;
printf("enter the number: ");
scanf("%d",&n);
while(n>0){
    ld=n%10;
    sum+=ld;
    n=n/10;
}
printf("sum of digits of the number is: %d",sum);
    return 0;
}
