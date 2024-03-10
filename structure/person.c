#include<stdio.h>
#include<string.h>
int main() {

    typedef struct person
    {
        char name[20];
        int age;
    } person ;

    struct person p1;

    p1.age = 19;

    struct person p2;
    strcpy(p2.name, "nemo ");
    // p2.name = "nemo ";

    printf("%d %s", p1.age, p2.name);

    printf("\n");

    person p3 = {"nayani hadi", 19};
    printf("%s %d", p3.name, p3.age);


    return 0;
}