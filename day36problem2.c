//Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int m,n;
    printf("enter number of rows(m): ");
    scanf("%d",&m);
    printf("enter number of columns(n): ");
    scanf("%d",&n);

    int arr[m][n];
    int sum=0;

    printf("enter elements of %dx%d matrix:\n ",m,n);
    for( int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("the total sum of all elements =%d\n",sum);
    return 0;
}
