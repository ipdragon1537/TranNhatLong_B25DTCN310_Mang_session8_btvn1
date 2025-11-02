#include <stdio.h>
int main() {
    int n;
    int arr[10];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 10) {
        printf("Loi: So phan tu phai nam trong khoang 1 den %d!\n", 10);
        return 1;
    }
    printf("Nhap tung phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang da nhap: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
