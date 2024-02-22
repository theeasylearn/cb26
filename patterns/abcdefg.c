//  a  b  c  d 
//  e  f  g  h
//  i  j  k  l
//  m  n  o  p

#include<stdio.h>
void main() {
    int i, j, k = 97;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf(" %c ", k);
            k++;
        }
        printf("\n");
    }
}

