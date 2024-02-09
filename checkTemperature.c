// temperature input 50 => you have fever

#include<stdio.h>
void main() {
    int temp;
    printf("Enter your temperature: ");
    scanf("%d", &temp);
    if (temp >= 50) {
        printf("You have fever.");
    }
}