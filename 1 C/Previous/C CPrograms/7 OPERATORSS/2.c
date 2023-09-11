#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 4, d = 5;
    printf("a*b/c=%d\n", a * b / c);
    printf("a+b-c=%d\n", a + b - c);
    printf("a+b*d-c%%a=%d", a + b * d - c % a);
    return 0;
}