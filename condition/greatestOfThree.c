// Largest Of Number Finder

#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    // check
    // if (num1 > num2) {
    //     printf("highest number = ", num1);
    // } else if (num2 > num3) {
    //     printf("highest numebr : ", num2);
    // } else if (num3 > num1) {
    //     printf("highest numebr  : ", num3);
    // }

    if (num1 > num2) {
        if (num1 > num3) {
            printf("highest number: %d", num1);
        } else {
            printf("highest number: %d", num3);
        }    
    }
    else {
        if (num2 > num3) {
            printf("highest number: %d", num2);
        } else {
            printf("highest number: %d", num3);
        }
    } 
}
