//  n = 5 
//  1 + 2 + 3 + 4 + 5
#include <stdio.h>
void main()
{
    int n = 4;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        // sum = sum + i;
    }
    printf("%d", sum);
    
}
