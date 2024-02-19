// Write a pro to print sum of digit of given number
#include<stdio.h>
void main() {
    int num = 0; // 6 + 5 + 4 = 15
    printf("Enter a number : ");
    scanf("%d", &num);

    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    printf("sum = %d", sum);
}


/*

    num = 123
    sum = sum + num%10;

    num = num / 10; // num = 12
    sum = sum + num % 10;

    num = num / 10; // num = 1
    sum = sum + num%10
    num = num / 10 // num = 0   

*/