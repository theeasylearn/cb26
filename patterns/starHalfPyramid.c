//  * 
//  *  *
//  *  *  *
//  *  *  *  *

#include<stdio.h>
void main() {

    int i, j;

/*
    printf(" * ");
    printf("\n");

    printf(" * ");
    printf(" * ");
    printf("\n");

    printf(" * ");
    printf(" * ");
    printf(" * ");
    printf("\n");

    printf(" * ");
    printf(" * ");
    printf(" * ");
    printf(" * ");
    printf("\n");
    */

    for (i = 1; i <= 4; i++) { 
        for (j = 1; j <= i; j++) {
            printf(" * ");

        }
        printf("\n");
    }
}

