#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        int num;
        do {
            printf("Nhap phan tu thu %d (phai la so le): ", i + 1);
            scanf("%d", &num);
            if (num % 2 == 0) {
                printf("So vua nhap khong phai la so le. Vui long nhap lai.\n");
            }
        } while (num % 2 == 0);
        
        arr[i] = num;
    }
    
    printf("Mang da nhap thanh cong voi tat ca cac phan tu la so le.\n");
    return 0;
}
