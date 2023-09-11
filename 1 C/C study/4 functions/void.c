#include <stdio.h>
/* function return type is void and it doesn't have parameters*/
void introduction()
{
    printf("Hi\n");
    printf("My name is Chaitanya\n");
    printf("How are you?");
    /* There is no return statement inside this function, since its
     * return type is void
     */
}

int main()
{
     /*calling function*/
     introduction();
     return 0;
}