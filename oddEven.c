//  check if number is even or odd 
// write a program to print all even numbers till 100

#include <stdio.h>
void main()
{
    int num = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("It is a even number ");
    } 
    else {
        printf("it is a odd number ");
    }
}