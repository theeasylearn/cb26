#include<stdio.h>
#include<stdbool.h>

int key = 2;

bool checkKey(int ar[], int length) {

    int i;
    for (i = 0; i < length; i++) 
    {
        if (ar[i] == key) {
            printf("found key  at index %d ", i);
            return true;

        }
    }
    printf("key not found \n");
    return false;
}


int main() {

    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // printf("Enter element number %d: ", i + 1);
    // scanf("%d", &arr[0]);


    checkKey(arr, length);
    




    return 0;
}