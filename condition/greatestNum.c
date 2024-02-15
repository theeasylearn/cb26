// greatest number of two numbers

#include<stdio.h>
void main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // printf("%d  %d", num1, num2);

    if (num1 > num2) {
        printf("%d", num1);
    } 
    else {
        printf("%d", num2);
    }

}
