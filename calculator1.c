// Calculator: Write a simple calculator program that takes two numbers and an operator (+, -, *, /) as input, and performs the corresponding operation.

#include <stdio.h>
void main()
{
    float num1, num2;

    char operator;

    printf("Enter number 1 and number 2 : ");
    scanf("%f %f", &num1, &num2);

    printf("%.2f %.2f \n", num1, num2);

    fflush(stdin);
    printf("Enter operator: ");
    scanf("%c", &operator);

    //      OR

    // printf("num1 operator num2: ");
    // scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+')
    {
        printf("sum = %f", num1 + num2);
    }
    else if (operator== '-')
    {
        printf("subtraction = %f", num1 - num2);
    }
    else if (operator== '*')
    {
        printf("product = %f", num1 * num2);
    }
    else if (operator== '/')
    {
        printf("division = %f", num1 / num2);
    }
    else
    {
        printf("invalid input");
    }
}

