//Write a program to print all the prime numbers from 1 to n
#include <stdio.h>
int main(){
int n,isprime=0;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=2;i<=n;i++){
    isprime=1;
for (int j = 2; j * j <= i; j++) {
    if (i % j == 0) {
        isprime = 0; 
        break;
    }
        }
         if (isprime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
