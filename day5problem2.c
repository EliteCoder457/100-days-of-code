//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
int seconds,hours, minutes, s;
printf("Enter the amount of seconds: ");
scanf("%d", &seconds);
hours=(seconds/3600);
minutes=(seconds%3600)/60;
s=(seconds%60);
printf("Time: %d:%0.0d:%0.0d\n", hours, minutes, s);
    
    
    
    return 0;
    
}
