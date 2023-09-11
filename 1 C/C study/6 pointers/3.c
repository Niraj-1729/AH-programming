#include<stdio.h>
int main ()
{
    int num1 , num2 , sum,  multi , dif ;
    int *ptr1 , *ptr2;

    ptr1= &num1;
    ptr2= &num2;

    printf("Enter two num");
    scanf("%d%d", ptr1,ptr2);

    sum =*ptr1+ *ptr2;
    dif=*ptr1 - *ptr2;
    printf("sum= %d " ,sum);
    printf("dif= %d " ,dif);

    return 0 ;

}