// Write a C program to check whether a given year is a leap year or not.

#include<stdio.h>
#include<stdbool.h>

bool checkLeap(int *year) {

    // printf("%d ", *year);

    if (*year % 4 == 0) {
        return true;
    } else {
        return false;
    }

    // return true;
}

int main() {

    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if (checkLeap(&year) == true) {
        printf("It is leap year ");
    } else {
        printf("It is a normal year ");
    }

    return 0;
}