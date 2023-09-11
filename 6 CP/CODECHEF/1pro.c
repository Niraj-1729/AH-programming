#include <stdio.h>
#define MAX 5
int main()
{
    int i = 0, N = 4;
    int value = 55;
    int arr[MAX] = {2, 3, 4, 5};

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    arr[0] = value;

    for (i =N; i >= 0; i--)
    {
    arr[i + 1] = arr[i];
    }

    

    N++;
    printf("\n");
    for (i = 0; i <= N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}