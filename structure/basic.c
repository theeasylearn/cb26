#include <stdio.h>
#include<string.h>

typedef float hadi;

int main()
{

    hadi h = 1.2;
    // printf("%f \n", h);

    typedef struct demo
    {
        char name[20];
        int age;
        int erN;
    } sd ;

    struct demo hadi;
    sd nayani;

    char str[] = "nayani hadi";
    // hadi.name = "nayani hadi ";
    strcpy(hadi.name, "nayani hadi");
        
    hadi.age = 21;
    hadi.erN = 21;

    printf("%d %d %s", hadi.age, hadi.erN, hadi.name);

    return 0;
}