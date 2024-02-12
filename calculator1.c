// Calculator: Write a simple calculator program that takes two numbers and an operator (+, -, *, /) as input, and performs the corresponding operation.

#include <stdio.h>
void main() {
    float num1, num2;

    printf("Enter number 1 and number 2 : ");
    scanf("%f %f", &num1, &num2);

    printf("%.2f %.2f \n", num1, num2);

    fflush(stdin);
    char operator;
    printf("Enter operator: ");
    scanf("%c", &operator);

}