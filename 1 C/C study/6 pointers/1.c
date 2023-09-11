// Program to get memory address using address of operator
#include <stdio.h>
int main()
{
    char character = 'C';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 9898989811;

    printf("Value of character = %c, Address of character is %u \n", character, character);
    printf("Value of integer = %c, Address of integer is %u \n", integer, integer);
    printf("Value of biginteger = %c, Address of biginteger is %u", biginteger, biginteger);

    return 0;
}
// #include <stdio.h>

// // Driver code
// int main()
// {
//     // Print value 20 using %u
//     printf("%u\n", 20);
//     return 0;
// }