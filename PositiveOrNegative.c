    // positive and negative  number 
#include<stdio.h>
void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // check
    if (num == 0) {
        printf("zero");
    }
    else if (num < 0) {
        printf("negative");
    } else {
        printf("Positive");
    }
}