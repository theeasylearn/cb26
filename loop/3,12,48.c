// 10 Write a pro to print this GP: 3,12,48,...,n terms

// term = 3
// printf("%d", term); // 3
// term = term * 4; // term = 12
// printf("%d", term); // 12
// term = term * 4; // term = 48
// printf("%d", term); // 48

#include <stdio.h>
void main()
{
    int term = 3;
    int n; 
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int count = 1; count <= n; count++)
    {
        printf("%d ", term); //  2
        term *= 4;           // term = term * 2 // 4
    }
}