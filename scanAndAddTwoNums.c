// Write a program in C to take two int as an input and add them
#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter number: ");
    scanf("%d", &num1);

    printf("Enter number: ");
    scanf("%d", &num2);

    printf("num1 + num2 = %d \n", num1 + num2);
    printf("num1 - num2 = %d \n", num1 - num2);
    printf("num1 * num2 = %d \n", num1 * num2);
    printf("num1 / num2 = %d \n", num1 / num2);
    printf("\n");

    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
    printf("%d / %d = %d \n", num1, num2, num1 / num2);
    printf("\n");

    // printf("%d \n", num1);
    // printf("%d \n", num1);

    // float / int - float
    // int / float - float
    // float / float - float
    // int / int - int

}
