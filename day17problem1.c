//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
int n,result=0,original,remainder;
printf("Enter the number: ");
scanf("%d",&n);
original=n;
while(n!=0){
    remainder=n%10;
    result+=remainder*remainder*remainder;
    n=n/10;
}
if(result==original)
printf("%d is an armstrong number",original);
else
printf("%d is not an armstrong number",original);

    return 0;
}
