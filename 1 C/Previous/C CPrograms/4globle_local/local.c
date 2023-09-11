#include <stdio.h>
int main()
{
    int var = 34; //scope of this variablee is within main() function
    printf("%d", var);
    return 0;
}

int fun()
{
    printf("%d", var); // here the var variable trying to access the variable from main function which is declared in the upper block 

    //finally we larnt about local varible
}