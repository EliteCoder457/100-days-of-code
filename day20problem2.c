//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main(){
int n,ld=0,i=0,arr[64];
printf("Enter the number: ");
scanf("%d",&n);
while(n>0){
    ld=n%10;
    n=n/10;
   arr[i]= (ld==0) ? 1 : 0;
   i++;
    
}
for(int j=i-1;j>=0;j--){
    printf("%d",arr[j]);
}

}
