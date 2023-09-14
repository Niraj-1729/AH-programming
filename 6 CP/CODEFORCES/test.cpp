#include <stdio.h>

int main()
{
    int b = 0, c = 0;
    int i;
    int a[50];
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1] || a[i] == a[i + 2])
        {
            b++;
        }
    }
    if (a[0] == a[3])
    {
        c++;
    }
    if (a[0] == a[1] || a[1] == a[2] || a[2] == a[3])
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", b + c);
    }
    return 0;
}