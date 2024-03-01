#include<stdio.h>

int largeOfTwo(int n1, int n2) {
    if (n1 > n2) {
        // printf("%d ", n1);
        return n1;
    }
    return n2;

}

int main() {

    printf("%d ", largeOfTwo(30, 60));

    return 0;
    
    // printf("hadi");
}