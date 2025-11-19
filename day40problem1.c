//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int startCol = 0; startCol < cols; startCol++) {
        int r = 0, c = startCol;
        while(r < rows && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }
    for(int startRow = 1; startRow < rows; startRow++) {
        int r = startRow, c = cols - 1;
        while(r < rows && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}
