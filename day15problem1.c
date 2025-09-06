//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
int f, factorial=1, i;
printf("Enter the value of which you want to calculate factorial: ");
scanf("%d",&f);
for(i=1;i<=f;i++){
    factorial*=i;
    
}
printf("factorial is %d", factorial);
    return 0;
}
