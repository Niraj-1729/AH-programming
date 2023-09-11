#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enterthe number:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && b>c)

    {
       printf("largest=%d", a);
    }
    else if (b>a && b>c)
    {
        printf("largest=%d", a);
    }
    else
    {
        printf("largest=%d", c);

    }
    
    return 0;
}