// Calculator: Write a simple calculator program that takes two numbers and an operator (+, -, *, /) as input, and performs the corresponding operation.

#include <stdio.h>
void main()
{
    float num1, num2;

    char operator;

    printf("Enter number 1 and number 2 : ");
    scanf("%f %f", &num1, &num2);

    // printf("%.2f %.2f \n", num1, num2);

    fflush(stdin);
    printf("Enter operator: ");
    scanf("%c", &operator);

    //      OR

    // printf("num1 operator num2: ");
    // scanf("%f %c %f", &num1, &operator, &num2);

   switch (operator) {
        case '+':
            printf("Sum = %.2f", num1 + num2);
            break;
        case '-':
            printf("Subtraction = %.2f", num1 - num2);
            break;
        default:
            printf("Invalid input");
            break;
        case '*':
            printf("Product = %.2f", num1 * num2);
            break;
        case '/':
            printf("division = %.2f", num1 / num2);
            break;
        
   }
}

