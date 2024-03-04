#include<stdio.h>

int sum(int n1, int n2) {
    return n1 + n2;
}

int sum2(int *a, int *b) {
    *a = *a + *b;
    return *a;
}

int main() {

    int num1 = 1, num2 = 2;

    printf("%d \n", sum(num1, num2));

    printf("%d %d \n",num1, num2);

    printf("---------------------");

    printf("%d \n", sum2(&num1, &num2));

    printf("%d %d \n",num1, num2);
    

    return 0;
}