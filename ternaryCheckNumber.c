// Write a ternary operator that checks if a number is both even and divisible by 5.

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // (num % 2 == 0 && num % 5 == 0) ? printf("Number is both even and divisible by 5") : printf("Number is neither even nor divisible by 5");

    (num == 0) ? printf("0 is neither even nor odd") : (num % 2 == 0 && num % 5 == 0) ? printf("Number is both even and divisible by 5") : printf("Number is neither even nor divisible by 5");

}