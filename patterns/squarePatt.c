
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
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n");

    // 1  1  1  1 
    // 2  2  2  2
    // 3  3  3  3
    // 4  4  4  4
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf(" %d ", i);
        }
        printf("\n");
    }

    printf("\n");

    //  1  2  3  4
    //  1  2  3  4
    //  1  2  3  4
    //  1  2  3  4
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf(" %d ", j);
        }
        printf("\n");
    }    
}