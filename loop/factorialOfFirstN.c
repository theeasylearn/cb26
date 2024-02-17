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
    }
    printf("%d! = %d\n", n, factorial);
}

// 4! = 4 * 3 * 2 * 1 = 4 * 3!
// 3! = 3 * 2 * 1 = 3 * 2!
// 2! = 2 * 1!
// 1! = 1;
