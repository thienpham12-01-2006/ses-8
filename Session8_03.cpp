#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    int array[n][n];
    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

