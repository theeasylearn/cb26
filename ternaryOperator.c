#include<stdio.h>
void main() {

    // if (num1 > num2) {
    //     printf("%d", num1);
    // } 
    // else {
    //     printf("%d", num2);
    // }

    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d", num1) : printf("%d", num2);

}