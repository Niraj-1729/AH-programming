#include <stdio.h>

int main()

{

    int a[] = {1, 2, 3, 4, 5, 6};
    int *j;
    for (int i = 0; i < 6; i++)
    {
        j = &a[i];
        printf("%u,%d\n", j, *j);
    }

    return 0;
}