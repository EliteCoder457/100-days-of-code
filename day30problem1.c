#include <stdio.h>
int main(){
int n;
printf("enter the number of elements: ");
scanf("%d",&n);
int arr[n];
int evencount=0, oddcount=0;
 printf("Enter the %d elements: ", n);
for(int i=0;i<n;i++){
   
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        evencount++;}
        
    else{
        oddcount++;
        
    }
    }

printf("even: %d",evencount);
 printf("odd: %d",oddcount);

    return 0;
}