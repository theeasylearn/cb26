//  1  0  1  0
//  1  0  1  0
//  1  0  1  0
//  1  0  1  0

#include <stdio.h>
void main()
{
    /*
    printf(" 1 ");
    printf(" 0 ");
    printf(" 1 ");
    printf(" 0 ");
    printf("\n");

    printf(" 1 ");
    printf(" 0 ");
    printf(" 1 ");
    printf(" 0 ");
    printf("\n");

    printf(" 1 ");
    printf(" 0 ");
    printf(" 1 ");
    printf(" 0 ");
    printf("\n");

    printf(" 1 ");
    printf(" 0 ");
    printf(" 1 ");
    printf(" 0 ");
    printf("\n");
*/

    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j % 2 != 0)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}