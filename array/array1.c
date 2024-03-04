#include<stdio.h>

int main() {

    // array 
    // what : collection of same type of data in a linear memory allocation
    // why : to collect data of myltiple user by just one veriable 
     //    : to make code more readable and DRY concept 
    //     : first common data structure 


    // syntax
    // dataType arrayName[size];
    // arrayName[i] = value;

    int arr[4];
    arr[0] = 1; // 1
    arr[1] = 2; // 2 
    arr[2] = 3; // 3
    arr[3] = 4; // last index = size - 1
    // arr[4] = 5;
    // arr[5] = 6;

    // printf("%d ", arr[1]);

    int arr2[] = {1, 2, 3, 4};

    arr[2] += 100;
    printf("%d \n", arr[2]);



    return 0;
}