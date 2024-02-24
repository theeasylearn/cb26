
#include<stdio.h>
void main() {
    int i, j;
    int k, l;

//  * * * *     * * * *
//  * * *         * * *
//  * *             * *
//  *                 *

    for (i = 1; i <= 4; i++) {

        for (j = 4; j >= i; j--) {
            printf(" *");
        }

        for (j = 1; j <= i; j++) {
            printf("  ");
        }
        // printf("\n");

        for (k = 1; k <= i; k++) {
            printf("  ");
        }

        for (k = 4; k >= i; k--) {
            printf(" *");
        }
        printf("\n");
    }


    // for (i = 1; i <= 4; i++) {
    //     for (j = 1; j <=4; j++) {
    //         if (i == j) {
    //             printf ("* ");
    //         } 
    //         else if (i == 1 || i == 4 || j == 1 || j == 4){
    //             printf("  ");
    //         }
    //         else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }


    // for (i = 1; i <= 4; i++) {

        
    // }
}