// count number of elements greater than key

#include <stdio.h>
int main()
{

    int ar[] = {3, 2, 65, 1, 7, 12, 5};

    int key = 3;

    int length = sizeof(ar) / 4;

    int count = 0;
    int i;
    for (i = 0; i < length; i++)
    {
        if (ar[i] > key)
            count++;
    }

    printf("%d ", count);

    return 0;
}

