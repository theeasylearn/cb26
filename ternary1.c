// Write a program to check if number is negative or not if number is negative then print its positive number.

#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    // if (number < 0) {
    //     printf("Number is less than 0");
    //     number = number * (-1);
    //     printf("%d", number);
    // } else {
    //     printf("number >= 0");
    // }

    (number < 0) ? printf("number is < 0  %d", (number * (-1))) : printf("number >= 0");
}