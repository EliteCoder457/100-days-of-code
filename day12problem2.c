//Write a program to calculate electricity bill based on units consumed with these rates:
#include <stdio.h>
int main(){
float e, e1, e2, e3, e4;
printf("enter the number of units of electricity consumed: ");
scanf("%f",&e);
if (e<=100){
    e1=e*5;
    printf("electricity bill: %0.2f",e1);
}
else if (e<=200){
    e2 = (100 * 5) + ((e - 100) * 7);
    printf("%0.2f",e2);
}
else if (e<=300){
    e3 = (100 * 5.0) + (100* 7.0)+ ((e - 200)*10);
    printf("%0.2f",e3);
}
else {
    e4 = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((e - 300) * 12.0);
    printf("%0.2f",e4);
}
    
    return 0;
}
