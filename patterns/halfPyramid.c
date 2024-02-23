
#include <stdio.h>
void main()
{
    int i, j;
    

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    //  1
    //  2  2
    //  3  3  3
    //  4  4  4  4
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }

    // a
    // b b
    // c c c
    // d d d d
    printf("\n");
    printf("\n");
    printf("\n");

    char ch = 'a';
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", ch);
        }
        ch++;
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    printf("\n");

    //  a
    //  a b
    //  a b c
    //  a b c d

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", j + 96);
        }
        printf("\n");
    }
}
