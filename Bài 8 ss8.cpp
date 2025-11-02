#include <stdio.h>

int main() {
    int rows, cols;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Mang da nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
