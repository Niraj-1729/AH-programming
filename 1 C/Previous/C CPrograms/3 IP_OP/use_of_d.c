#include <stdio.h>
int main ()
{
    int two=2 , three=3, six=6 ;
    int result= (two + three) * six / three ;

    printf("Arithmetic expression: (%d+%d) * %d/%d", two ,three ,six );
    printf("result: %d", result);
    return 0;

}