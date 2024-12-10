#include <stdio.h>
int main() {
    int i, j;
    int array[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
	};
    int max = array[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}

