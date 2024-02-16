// 6 write a program to print 1 to N numbers {1 2 3 4 ... N}; take N{input} from user
#include<stdio.h>
void main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    // int var = 1;

    // printf("%d ", var);
    // var++;
    // printf("%d ", var);
    // var++;
    // printf("%d ", var);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    // int i = 1;
    // while (i <= n) {
    //     printf("%d ", i);
    //     i++;
    // }

}
