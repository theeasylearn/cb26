// Area of Circle

#include<stdio.h>
void main() {
    int radius = 3.14;

    printf("Enter value of radius: ");
    scanf("%d", &radius);

    float ans = 3.14 * radius * radius;

    printf("Answer = %.2f", ans);

    // or 
    // printf("Area of circle is %.2f", (3.14 * radius * radius));
}
