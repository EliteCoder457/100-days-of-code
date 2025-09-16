//rite a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
int n,p=1,ld;
printf("enter the number: ");
scanf("%d",&n);
while(n>0){
    
    ld=n%10;
     n=n/10;
    if(ld%2!=0){
        p=p*ld;
       
    }
}
printf("product of odd digits is %d",p);
    return 0;
}
