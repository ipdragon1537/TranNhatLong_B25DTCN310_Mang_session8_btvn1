#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int mang[MAX_SIZE];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu phai nam trong khoang 1 den %d!\n", MAX_SIZE);
        return 1;
    }
    printf("Nhap tung phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Cac phan tu la so nguyen to: ");
    int coSoNguyenTo = 0;
    for (int i = 0; i < n; i++) {
        int num = mang[i];
        int laNguyenTo = 1;
        if (num < 2) {
            laNguyenTo = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    laNguyenTo = 0;
                    break;
                }
            }
        }
        if (laNguyenTo) {
            printf("%d ", num);
            coSoNguyenTo = 1;
        }
    }
    if (!coSoNguyenTo) {
        printf("Khong co so nguyen to nao.");
    }
    printf("\n");

    return 0;
}
