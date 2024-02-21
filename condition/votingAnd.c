// voting 
#include <stdio.h>
void main() {
    int age;
    char check;

    printf("Enter your age: ");
    scanf("%d", &age);

    fflush(stdin);
    printf("Are you Indian ? y/n ");
    scanf("%c", &check);

    if (age >= 18 && check == 'y') {
        printf("You can vote");
    } else {
        printf("You can not vote");
    }
}

