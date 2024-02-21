
#include <stdio.h>
void main()
{

    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // Method 1
    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("* * * *");
    // printf("\n");
    // }

    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf("\n");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf("\n");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf("\n");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf("\n");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf(" * ");
    // printf("\n");

    // Method 2

    // *  *  *  *
    // *  *  *  *
    // *  *  *  *
    // *  *  *  *
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }

    // printf("\n");

    // 1  1  1  1
    // 2  2  2  2
    // 3  3  3  3
    // 4  4  4  4
    // for (int i = 1; i <= 4; i++) {
    //     for (int j = 1; j <= 4; j++) {
    //         printf(" %d ", i);
    //     }
    //     printf("\n");
    // }

    // printf("\n");

    /*
     1  2  3  4
     1  2  3  4
     1  2  3  4
     1  2  3  4
    */

    // for (int i = 1; i <= 4; i++) {
    //     for (int j = 1; j <= 4; j++) {
    //         printf(" %d ", j);
    //     }
    //     printf("\n");
    // }

    /*
         01  02  03  04  05
         06  07  08  09  10
         11  12  13  14  15
         16  17  18  19  20
         21  22  23  24  25
    */
    int sum = 1;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);
    // printf("\n");
    // sum++;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);
    // printf("\n");
    // sum++;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);
    // sum++;
    // printf(" %d ", sum);

    int i = 1;
    for (i = 1; i <= 5; i++) // row // height
    {
        for (int j = 1; j <= 7; j++) // col // width
        {
            printf(" %.2d ", sum);
            sum++;
        }
        printf("\n");
    }
}