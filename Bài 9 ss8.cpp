#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Cac phan tu tren duong bien: ");
    for(int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]);
    }
    if(rows > 1) {
        for(int i = 1; i < rows - 1; i++) {
            printf("%d ", matrix[i][cols - 1]);
        }
    }
    if(rows > 1) {
        for(int j = cols - 1; j >= 0; j--) {
            printf("%d ", matrix[rows - 1][j]);
        }
    }
    if(cols > 1 && rows > 1) {
        for(int i = rows - 2; i >= 1; i--) {
            printf("%d ", matrix[i][0]);
        }
    }
    printf("\n");
    for(int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}

