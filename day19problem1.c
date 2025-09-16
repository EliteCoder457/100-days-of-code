//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
int a,b,lcm;
printf("Enter the numbers: ");
scanf("%d %d",&a,&b);
int min = (a < b) ? a : b;
for(int i=min;i>1;i--){
    if(a%i==0 && b%i==0){
        lcm =i;
    }
}

printf("%d",lcm);
    return 0;
}
