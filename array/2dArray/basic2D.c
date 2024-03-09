// https://cdn.kastatic.org/googleusercontent/_anqPXDhdx2MuQIN7S9F-nYDbxNVMFfrKL-bgihYpi1iqa-bi5Gggwy8k70xZgZ0j84IzMKQDg2VusdRgoUens4

#include <stdio.h>
int main()
{

    // int matrix[row][col] = {{elements of row1}, {elements of row2}, {elements of row3}, ... };

    int arr[3][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    arr[0][2];                  // 3
    // printf("%d \n", arr[2][4]); // 5 



    for (int i = 0; i < 3; i++)
    { // row
        for (int j = 0; j < 5; j++)
        { // column
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
