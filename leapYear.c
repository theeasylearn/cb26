//  Leap Year Checker:

#include <stdio.h>
void main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    // check
    if (year % 4 == 0) {
        printf("it is a leap year");
    } else {
        printf("it is not a leap year");
    }
}