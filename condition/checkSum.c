// int 2 number  input + sum > 100 print(hello)

#include<stdio.h>
void main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    // int sum;
    // sum = num1 + num2;

    // check simple if
    if ((num1 + num2) >= 100)
    {
        printf("hello\n");
    }

    printf("good bye");
    
}