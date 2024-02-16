//  4,7,10,13,16,...,n 

#include<stdio.h>
void main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 4; i <= n; i += 3) {
        printf("%d ", i);
    }
}

// n += 3;    n = n + 3;   

// n -= 3;    n = n - 3;   

// n *= 3;    n = n * 3;   