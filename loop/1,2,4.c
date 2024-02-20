// Display this GP 1,2,4,8,16,32,...,n terms.

// term = 1
// printf("%d ", term); // 1
// term = term * 2; // 1 * 2 = 2
// printf("%d ", term); // 2
// term = term * 2; // 2 * 2 = 4
// printf("%d ", term); // 4
// term = term * 2; // 4 * 2 = 8
// printf("%d ", term); // 8

// 1,2,4,8,16,32,...,n
#include <stdio.h>
void main()
{
    long long  int term = 1;
    int n; 
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int count = 1; count <= n; count++)
    {
        printf("%lld ", term); //  2
        term *= 2;           // term = term * 2 // 4
    }
}