// 11011
#include<stdio.h>
#include<stdbool.h>

bool check(int num) {

    int rnum = 0;
    int num2 = num;
    while (num != 0)
    {
        // printf("%d ", rnum);
        // rnum % 10;

        rnum = rnum * 10 + num % 10;
        // num /= 10;
        num = num / 10;
    } // to get rnum
    
    if (num2 == rnum) {
        return true;
    } else {
        return false;
    }
    // return true;
}


// int check(int num) {

//     int rnum = 0;
//     int num2 = num;
//     while (num != 0)
//     {
//         // printf("%d ", rnum);
//         // rnum % 10;

//         rnum = rnum * 10 + num % 10;
//         // num /= 10;
//         num = num / 10;
//     }
//     // printf("%d \n", rnum);
//     return rnum;
// }

int main() {

    // int num = 11011;

    if (check(11011) == true) {
        printf("Polindrome number ");
    } else {
        printf("Not a polindrome number ");
    }

    return 0;
}
