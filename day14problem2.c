//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
int i, n, product=1;
printf("enter the value of n: ");
scanf("%d",&n);
for(i=2;i<=n;i+=2){
    product*=i;
   }
printf("product of %d even numbers from 1 to %d is %d\n", n, n, product);




    return 0;
}
