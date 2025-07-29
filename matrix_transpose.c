# Matrix Transpose in C

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols], transpose[cols][rows];
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose:\n");
    for(int i=0; i<cols; i++) {
        for(int j=0; j<rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
