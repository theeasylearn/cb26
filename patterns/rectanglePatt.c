
#include <stdio.h>
void main()
{
    int i, j;
    int height, width;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter width: ");
    scanf("%d", &width);

    // printf("%d %d", height, width);

    //  *  *  * 
    //  *  *  *
    //  *  *  *
    //  *  *  *
    //  *  *  *
    // 
    for (i = 1; i <= height; i++) { // height // row
        for (j = 1; j <= width ;j++) { // width // col
            printf(" *   ");
        }
        printf("\n");
    }
}