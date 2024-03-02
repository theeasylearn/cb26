#include<stdio.h>

int factorial(int num) {

    int fact = 1;
    for (int i = 1; i <= num; i++){ 
        fact *= i;
    }

    return fact;
}

int npr(int n, int r) {
    int temp = factorial(n) / factorial(n - r);
    return temp;
}

int main() {

    int n = 6, r = 2;
    // printf("Enter n and r: ");
    // scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input\n ");
        printf("please enter n >= r <= 0 \n ");
        return 0;
    } else {
        printf("%d P %d = %d ", n, r, npr(n, r));
    }



    return 0;
}