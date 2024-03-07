#include<stdio.h>

int factorial(int num) {

    int fact = 1;
    for (int i = 1; i <= num; i++){ 
        fact *= i;
    }

    return fact;
}

int ncr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));   
}

int npr(int n, int r) {
    int temp = factorial(n) / factorial(n - r);
    return temp;
}
    
int main() {

    int n = 6, r = 2;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input\n ");
        printf("please enter n >= r <= 0 \n ");
        return 0;
    } else {
        printf("%d P %d = %d \n", n, r, npr(n, r));
        printf("%d C %d = %d ", n, r, ncr(n, r));
        
    }



    return 0;
}