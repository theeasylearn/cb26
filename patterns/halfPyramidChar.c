//  * 
//  *  *
//  *  *  *
//  *  *  *  *

#include<stdio.h>
void main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 != 0) {
                printf(" a ");
            } 
            else {
                printf(" b ");
            }
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                printf(" a ");
            } 
            else {
                printf(" b ");
            }
        }
        printf("\n");
    }
        printf("\n");
}

