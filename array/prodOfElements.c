#include <stdio.h>
int main()
{

    int ar[] = {-2, -3, 10, 6, 2};

    int prod = 1;

    // prod *= ar[0];
    // prod *= ar[1];
    // prod *= ar[2];
    // prod *= ar[3];
    // prod *= ar[4];

    int length = sizeof(ar) / 4;

    for (int i = 0; i < length; i++)
    {
        prod *= ar[i];
    }

    printf("%d ", prod);
    return 0;
}