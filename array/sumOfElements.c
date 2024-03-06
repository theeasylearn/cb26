#include <stdio.h>
int main()
{

    int ar[] = {-4, 3, 5, 6, -7};

    int sum = 0;

    // sum += ar[0];
    // sum += ar[1];
    // sum += ar[2];
    // sum += ar[3];
    // sum += ar[4];
    // sum += ar[5];
    // sum += ar[6];

    int length = sizeof(ar) / 4;

    for (int i = 0; i < length; i++)
    {
        sum += ar[i];
    }

    printf("%d ", sum);
    return 0;
}