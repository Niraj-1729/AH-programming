#include<stdio.h>
int main ()
{
    int var=3;
    {
        int var=4;
        printf("%d\n",var); //here this vsriable is working is it is inside another block (diffrent blocks)
    }
    printf("%d", var);
    return 0;
}