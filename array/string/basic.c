#include<stdio.h>
#include<string.h>

int main() {

    char str[] = {'h', 'a', 'd', 'i'};
    char str2[] = {'h', 'a', 'd', '\0', 'i'};

    printf("%d \n", sizeof(str) / sizeof(str[0]));

    for (int i = 0; i < 4; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    char btr[] = "nAyany is coder ";
    // for (int i = 0; i < 6; i++) {
    //     printf("%c ", btr[i]);
    // }

    printf("%s is coder", btr);
    printf("\n");
    puts(btr); // to show output 

    // btr[0] = "mahamd ";

    printf("\n------------------------------\n");

    char ctr[30];

    // int i = 0;
    // while (ctr[i - 1] != '\n') {
    //     scanf("%c", ctr[i]);
    //     i++;
    // }

    gets(ctr); // to take input 

    // printf("%s ", ctr);
    // puts(ctr);

    printf("%c \n", btr[5]);


    printf("%d ", strlen(ctr));

    return 0;
}