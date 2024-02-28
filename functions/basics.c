#include<stdio.h>

// returnType name (parameters ) {

    // code 

//     return ;
// }


float sum(int a, int b) {
    // f(x) = x + 1;

    // f(2) = 2 + 1 = 3 
    // f(-2) = -2 + 1 = -1 
    int add = a + b;
    return add;
}


int temp(int n1) {
    // a += 4;
    n1 = n1 + 4;
    return n1;
}

void main() {
    // int i = 1;

    int n1, n2;

    // printf("Enter n1 and n2: ");
    // scanf("%d %d", &n1, &n2);

    // printf("%f ", sum(n1, n2)); // ans = value of add 

    int a = 1;
    printf("temp = %d \n", temp(a));

    printf("main = %d ", a);


    // return ;
}