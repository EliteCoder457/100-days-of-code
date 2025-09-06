//Write a program to print the sum of the first n odd numbers
#include <stdio.h>
int main (){
    int i, n, sum=0;
    int count=0;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;count<n;i+=2){
    sum+=i;
    count++;
}
printf("sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}
