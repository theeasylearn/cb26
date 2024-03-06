#include <stdio.h>
int main()
{

    char ch;

    int size = sizeof(ch);
    // printf("%d ", size);

    int arr[] = {3, 6, 3, 6, 8};

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("%d \n", length);
    // printf("%d", arr[0]);

    for (int i = 0; i < length; i++) {

        printf("%d ", arr[i]);
    }


    
    return 0;
}