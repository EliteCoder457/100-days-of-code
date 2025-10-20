/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include <stdio.h>
int main(){
int r;
printf("enter the number of rows: ");
scanf("%d",&r);
for(int i=r;i>=1;i--){
    for(int j=i;j<=r;j++){
        printf("%d",j);
    }
    printf("\n");
}

    return 0;
}
