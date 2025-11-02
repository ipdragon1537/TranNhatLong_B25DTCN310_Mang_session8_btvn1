#include <stdio.h>

int main() {
    int a[5] = {222, 5, 432, 9, 7,};
    int haveEvenNumber = 0;
    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            haveEvenNumber = 1;
        }
    }
    if (!haveEvenNumber){
        printf("\nMang khong chua so chan");
    }
    printf("\n");
    return 0;
}

