#include<stdio.h>
#include<string.h>
int main() {
    
    union person
    {
        int age;
        char name[20];
    };

    // union person p1 = {10, "nayani "};
    union person p1;
    strcpy(p1.name, "nayani");
    p1.age = 10;
    
    printf("%d %s", p1.age, p1.name);

}