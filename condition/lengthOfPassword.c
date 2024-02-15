    // check length of password = min length = 4

#include<stdio.h>
void main() {
    int password;
    printf("Enter password: ");
    scanf("%d", &password);

    // password = 5;
    // check
    if (password > 999) {
        printf("true");
    } else {
        printf("false");
    }
}

