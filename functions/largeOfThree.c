#include<stdio.h>

int largeOfThree(int n1, int n2, int n3) {
    if (n1 > n2) {
        if (n1 > n3) {
            return n1;
        } 
        return n3;
    } 
    else if (n2 > n3) {
        return n2;
    }
    else return n3;

}

int main() {


    printf("%d ", largeOfThree(-9, -20, 3));
    return 0;
}