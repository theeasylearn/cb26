// Swap Values using a Third Variable

#include <stdio.h>
void main() {
    int num1 = 10;
    int num2 = 20;
    int num3;

    printf("Before Swap: \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("After Swap: \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

}
