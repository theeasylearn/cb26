#include<stdio.h>

float square(float n1) {
    return n1 * n1;
}

int main() {

    float num;
    // float sq;

    printf("Enter a number : ");
    scanf("%f", &num);

    // sq = square(num);
    square(2); // function call 


    // printf("%.2f * %.2f = %.2f ",num, num, sq);


    printf("%f", square(num));

    // printf("asdf");

    // scanf("%d", &a);

    // fflush(stdin);

    return 0;

}
