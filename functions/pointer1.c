#include<stdio.h>
int main() {
    
    // float num = 1;
    // scanf("%f", &num); 
    // printf("%f ", num);

    // printf("\n");

    // printf("%p \n", &num);

    // num = 5;

    // printf("%p \n", &num);


    // float *nump = &num;

    // printf("nump = %p \n", nump);

    printf("-----------------------\n");

    int num2 = 9;
    int *num2p = &num2;

    printf("%d \t %p \n", num2, num2p);

    printf("%d \n", *num2p);

    *num2p += 4;

    printf("%d \n", num2);


    return 0;

}