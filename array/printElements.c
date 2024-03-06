#include<stdio.h>
int main() {

    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    // long long int a;

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("%d \n", sizeof(arr) / sizeof(arr[0]));

    // hw 4 3 24
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}