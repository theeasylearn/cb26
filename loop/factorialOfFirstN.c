// Write a pro to print factorial {!} of first n numbers. 
#include <stdio.h>
void main()
{
    int n ;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        // factorial = factorial * i;
    }
    printf("%d! = %d", n, factorial);
    
}

// 4! = 4 * 3 * 2 * 1