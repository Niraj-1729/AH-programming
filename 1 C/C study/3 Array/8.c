#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    int a[100];

    printf("input the number of elements to stored in the array:\n");
    scanf("%d", &n);

    printf("input 3 elements in array:\n");

    for (i = 0; i < n; i++)
    {
        printf(" element - %d", i);
        scanf("5d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    Printf("sum of all the elements is : %d  \n", sum);

    return 0;
}