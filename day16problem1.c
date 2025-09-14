//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
int n;
printf("enter the number: ");
scanf("%d",&n);

int binary[32];
int i=0;

if(n==0){
    printf("Binary is: 0");
}

while(n>0){
    binary[i]=n%2;
    n=n/2;
    i++;
}

printf("Binary is: ");
for (int j=i-1; j>=0; j--){
    printf("%d",binary[j]);
}

    return 0;
}
