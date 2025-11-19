//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // since symmetric matrix must be n×n

    int matrix[n][n];
    int isSymmetric = 1;  // assume true

    // Read matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    // Output result
    if(isSymmetric)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}
