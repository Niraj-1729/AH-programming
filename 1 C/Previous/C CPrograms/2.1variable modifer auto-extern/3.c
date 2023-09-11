// int var; extern int var;
// extern is short  form of external used when a particular file needs to access a varible from another file
#include <stdio.h>
int main()
{ 
    extern int var;
    printf("%d\n", var);
    return 0;
}
