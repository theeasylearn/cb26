#include <stdio.h>
int main()
{

    // datatype arrayName[] = {values , value2 };
    // datatype arrayName[size];

    int ar[] = {1, 2, 3, 4, 5, 6, 7};

    int br[3] = {1, 2, 3};

    // printf("%d ", ar[0]);
    // printf("%d ", ar[1]);
    // printf("%d ", ar[2]);
    // printf("%d ", ar[3]);

    for (int i = 0; i < 7; i++)
    {
        printf("Enter ar[%d]: ", i);
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", ar[i]);
    }

    float frr[] = {1.2, 2.4, 5.3, 6.4};

    printf("\n");

    int length = sizeof(frr) / sizeof(frr[0]);    

    for (int i = 1; i <= length; i++) {
        printf("%.2f ", frr[i - 1]); // 1.2 2.4 
    }

    printf("\n");


    char crr[] = {'a', 'b', 'c', 'd'};


    int clength = sizeof(crr) / sizeof(crr[0]);

    for (int i = 0; i < clength; i++) {
        printf("%c ", crr[i]);
    }
 
    return 0;
}