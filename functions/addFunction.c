#include<stdio.h>

int add(int n1, int n2, int sum) {
    sum = n1 + n2;
    return sum;
}

int main() {

    int n1 = 1, n2 = 2, sum = 0;
    // sum = add(n1, n2, sum);

    printf("%d \n", add(n1, n2, sum));

    printf("sum = %d \n", sum);

    // add(1, 3 , 5);
    return 0;
}