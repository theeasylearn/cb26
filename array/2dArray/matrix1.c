#include<stdio.h>
int main() {

    int arr[3][4] = {{2, 5, 3, 4}, {4, 7, 1, 5}, {3, 0, 5, 8}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // printf("%d ", arr[2][1]); // 0

    return 0;
}