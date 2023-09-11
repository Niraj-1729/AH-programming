#include <stdio.h>
int sum(int a, int b)
{

    int c = a + b;
    return c;
}

int main ()
{
    int var1 = 10;
    int var2= 20;
    int var3 = sum(var1, var2);

printf("%d", var3);

return 0;
}