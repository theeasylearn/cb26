#include<stdio.h>
int main() {

    int arr[3][4] = {{2, 5, 3, 4}, {4, 7, 1, 5}, {3, 0, 5, 8}};

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    printf("sum = %d ", sum);

    return 0;
}