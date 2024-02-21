// 02 04 06 08
// 10 12 14 16
// 18 20 22 24
// 26 28 30 32

#include <stdio.h>
void main()
{
    int i = 0, j;
    int sum = 2;

    int height, width;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter width: ");
    scanf("%d", &width);

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            printf("%.2d ", sum);
            sum += 2;
        }
        printf("\n");
    }

    // for (i = 1; i <= height; i++)
    // {
    //     for (j = 1; j <= width; j++)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             printf(" %d ", i);
    //         }
    //             i += 3;
    //     }
    //     printf("\n");
    // }
}