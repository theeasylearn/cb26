// 14 Guess the number / write a program to take input a number until user dont enter key;

#include <stdio.h>
#include <stdbool.h>
void main()
{
    int key = 10;
    int input;
    // bool flag = true;
    // int num = 1;
    // while (num > 0)
    // {
    //     printf("Enter a number: ");
    //     scanf("%d", &input);
    //     if (key == input)
    //     {
    //         printf("you have entered key ");
    //         break;
    //     }
    // }

    do
    {
        printf("Enter a number: ");
        scanf("%d", &input);
        
    } while (input != key);
}


