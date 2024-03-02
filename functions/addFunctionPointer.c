#include<stdio.h>

int add(int *n1, int *n2) {
    *n1 += 1;
    *n2 *= 5;
    // printf("%d \t %d", *n1, *n2);
    return 0;
}

int main() {

    int n1 = 9, n2 = 6;

    printf("num1 before call : %d \n", n1);
    printf("num2 before call : %d \n", n2);
    
    add(&n1, &n2);

    printf("num1 after call : %d \n", n1);
    printf("num2 after call : %d \n", n2);

    

    return 0;
}