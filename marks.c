// take marks of two students as intput and print heighest marks
#include<stdio.h>
void main() {
    float marks1, marks2;

    printf("Enter marks1: ");
    scanf("%f",&marks1);

    printf("Enter marks2: ");
    scanf("%f", &marks2);

    
    // if else statements
    if (marks1 > marks2) {
        printf("%.2f", marks1);
    } 
    else {
        printf("%.2f", marks2);
    }
}