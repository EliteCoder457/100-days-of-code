//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main(){
int n,positive=0, negative=0,zero=0;
printf("enter the number of elements: ");
scanf("%d",&n);
int arr[n];
printf("enter %d elements: ",n);
for(int i=0; i<n;i++){
scanf("%d",&arr[i]);
if(arr[i]>0){
    positive++;
}
else if(arr[i]<0){
    negative++;
}
else{
    zero++;
}
}
printf("positive: %d\n", positive);
printf("negative: %d\n", negative);
printf("zero: %d\n", zero);
    return 0;
}
