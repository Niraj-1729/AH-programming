#include <stdio.h>
int square(int num)
{
    int sq ;
    sq = num * num;
    return (sq);
}

int main()
{
    int x;
    int sq;

    printf("\n\n Function : find square of any number :\n");
    printf("------------------------------------------------\n");
    printf(" enter number :");
    scanf("%d", &x);
    sq = square(x);
    printf(" the square of number is : %d", sq);
    return 0;
}