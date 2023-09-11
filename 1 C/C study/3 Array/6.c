#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("\n read and print elements of array : \n");
    printf("\n  ------------------- \n");

    printf(" \n Input 10 elements in the array : \n");

    for (i = 0; i < 10; i++)
    {

        printf(" element -%d :", i);
        scanf(" %d", &arr[i]);
    }

    printf("elements in the array :");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}