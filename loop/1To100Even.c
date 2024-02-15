// write a program to print all even numbers till 100

#include <stdio.h>
void main()
{
    int num = 1;
    // printf("%d ", num);
    // num = num + 2;
    // printf("%d ", num);
    // num = num + 2;
    // printf("%d ", num);
    // num = num + 2;
    // printf("%d ", num);

    // while (num <= 100 )
    // {
    //     printf("%d ", num);
    //     num = num + 2;
    // }

    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            printf("%d ", num);
        }
        num++;
    }
}