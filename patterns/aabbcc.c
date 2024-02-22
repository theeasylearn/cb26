// a a a a 
// b b b b 
// c c c c 
// d d d d 

// ascii values -> 'a', 'b', '@' 


#include <stdio.h>
void main()
{
    /*
    char ch = 'a';
    printf("%d", ch);

    printf("\n");

    int temp = 101;

    printf("%d   ", temp);
    printf("%c ", temp);
    */

   int i, j;

   for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf(" %c ", i + 96);
        }
        printf("\n");
   }


}