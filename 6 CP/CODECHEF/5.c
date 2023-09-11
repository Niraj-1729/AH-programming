#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    a = 67, b = 95;
    c = sum(a, b);
    printf("%d", c);
    return 0;
}