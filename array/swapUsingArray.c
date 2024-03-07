#include<stdio.h>

void swapArray(int hadi[]) {
    // using array 
    int temp = hadi[0];
    hadi[0] = hadi[1];
    hadi[1] = temp;     
}

void swap(int *n1, int *n2) {
    
    // using pointers 
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    // printf("%d %d \n", *n1, *n2);
    // *n1 = 23;
    // *n2 = *n2 - *n1;
    
}

int main() {
    int num1 = 1, num2 = 2;
    int temp = 0;

    // printf("%d %d \n", num1, num2);
    // swap(&num1, &num2);
    // printf("%d %d \n", num1, num2);


    int num[] = {3, 4};
    printf("%d %d \n", num[0], num[1]);
    swapArray(num);
    printf("%d %d \n", num[0], num[1]);


    // printf("num1 = %d \n", num1);
    // printf("num2 = %d ", num2);

    int num[] = {int a = 1, int b = 2};
    return 0;
}