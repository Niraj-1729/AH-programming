#include <stdio.h>
#define add (x, y) x + y

int main()
{
    printf("result of expression is a*b+c %d", 5* add(4,3));
    return 0;
}
// first expansion then evaluation 