// 5 -> 1, 5 
// 7 3 2 13 11 

// 11011
#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int num) {
    int i;
    int temp = 1;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        } 
    }

    // if (temp == 0) {
    //     printf("It is not a prime number ");
    // } else {
    //     printf("It is a prime number ");
    // }
    return true;
}

int main() {

    // int num = 11011;

    if (checkPrime(14) == true) { 
        printf("It is a prime number ");
    } else {
        printf("It is a prime not number ");
    }
    return 0;
}
