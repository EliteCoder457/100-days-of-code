// Search for an element in an array using linear search.
#include <stdio.h>

int main() {
int n,key,found=0;
printf("enter the number of elements: ");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[n]);
}
printf("enter the element to search: ");
scanf("%d",&key);
for(int i=0;i<n;i++){
    if(arr[i]==key){
        printf("element found at position: %d\n",i+1);
        found=1;
        break;
    }
}
if(!found){
    printf("element not found in the array\n");
}
    return 0;
}
