#include <stdio.h>
int main ()
{
    int i;
    int j;
    for ( i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}