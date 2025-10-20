//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main(){
float sum =0;
int n;
printf("enter the number of terms: ");
scanf("%d",&n);
for(int i=1; i<=n;i++){
    sum += ((2.0*i) / (2*i+1));
}
printf("%0.2f", sum);

    return 0;
}
