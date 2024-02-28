#include<stdio.h>


int sub(int n1, int n2) {
    int sub = n1 - n2;
    return sub;
}


void main() {

    int a = 1, b = 3;
    printf("%d ", sub(b, a));

    printf("%d ", sub(1, 2));

    // printf("%d %c", ch, i);
}