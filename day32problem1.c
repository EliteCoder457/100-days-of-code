// Merge two arrays.
#include <stdio.h>
int main() {
int n1,n2;
printf("enter number of elements in 1st array: ");
scanf("%d",&n1);
int arr1[n1];
printf("enter %d elements of the array: \n",n1);
for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
printf("enter number of elements in 2nd array: ");
scanf("%d",&n2);
int arr2[n2];
printf("enter %d elements of the array: \n",n2);
for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
}

int mergedSize = n1 + n2;
int merged[mergedSize];
for (int i = 0; i < n1; i++) {
    merged[i] = arr1[i];
}

for (int i = 0; i < n2; i++) {
    merged[n1 + i] = arr2[i];
}
printf("Merged array:\n");
for (int i = 0; i < mergedSize; i++) {
    printf("%d ", merged[i]);
}
    return 0;
}
