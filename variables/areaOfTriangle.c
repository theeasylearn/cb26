// Area of Triangle

#include<stdio.h>
void main() {
    float height;
    float base;

    printf("Enter value of height: ");
    scanf("%f", &height);

    printf("Enter value of base: ");
    scanf("%f", &base);

    float ans = height * base / 2;
    
    printf("Answer = %.2f", ans);
}