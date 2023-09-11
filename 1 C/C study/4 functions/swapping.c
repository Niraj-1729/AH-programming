#include<stdio.h>

void swapnum(int a , int b  )
{
    int tempnum;
    tempnum = a;

    a=b;

    b= tempnum;

}

int main()
{
    int num1 = 20 , num2= 39;
    printf(" numbers before swapping ");

    swapnum(num1 , num2);
    printf("after swapping : %d, %d" ,  num1 , num2);
}