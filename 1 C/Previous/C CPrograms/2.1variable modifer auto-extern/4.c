#include <stdio.h>
extern int a;
extern int a;
extern int a; //moltiple definition is allowed but multiple declaration is not 

int main()
{
    printf("%d", a );
}