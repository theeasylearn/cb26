// 15 Write a pro to print reverse of given number.
// int num = 123; ==> 321

#include<stdio.h>
void main() {
    int num = 1233211;
    scanf("%d", &num);
    int rnum = 0;

    while (num != 0)
    {
        rnum = rnum * 10 + num % 10; // 645
        num /= 10; // num = 0
        
    }
    printf("%d", rnum);
    
}

