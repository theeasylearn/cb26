// 13 Write a pro to print PRODUCT of all digit of given number.

#include<stdio.h>
void main() {
    int num = 123;

    int product = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    
    while (num != 0)
    {
        product *= (num % 10); 
        // product = product * num % 10;
        num = num / 10;
    }
    printf("%d", product);

    // 26 > 2 * 6 = 12    
    
}