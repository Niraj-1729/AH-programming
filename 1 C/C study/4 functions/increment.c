#include<stdio.h>
 int increment (int var)
 {
    var = var+1;
    return var;
 }

 int main ()
 {
    int num1 = 10 ;
    int num2= increment(num1);
    printf(" num1 value is : %d", num1);
    printf("num2 value is : %d", num2);

    return 0;
 }