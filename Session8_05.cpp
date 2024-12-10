#include <stdio.h>
int main() {
    int rows = 3, cols = 3;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += array[0][j];      
        if (rows > 1) {
            sum += array[rows-1][j]; 
        }
    }
    for (int i = 1; i < rows-1; i++) {
        sum += array[i][0];       
        if (cols > 1) {
            sum += array[i][cols-1]; 
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    return 0;
}

