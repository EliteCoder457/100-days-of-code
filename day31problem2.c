// Reverse an array without taking extra space.
#include <stdio.h>
int main() {
int n;
printf("enter number of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("enter %d elements of the array: \n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0,j=n-1;i<j;i++,j--){
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
printf("reversed array:\n");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
    return 0;
}
