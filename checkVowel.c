#include <stdio.h>
void main() {
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);


    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A') {
        printf("This is a vowel");
    } else {
        printf("This is a consonant");
    }
}