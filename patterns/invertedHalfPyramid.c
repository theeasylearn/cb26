// * * * *
// * * *
// * *
// *

#include <stdio.h>
void main()
{
    int i, j;

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}