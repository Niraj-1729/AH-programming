#include<stdio.h>
int main()
{
    int  num;
    int *ptr=&num;
    int **dptr= &ptr;

    num = 10;
    printf("%d\n" , num);
    printf("%d\n", *ptr);
    printf("%d\n",**dptr);

    *ptr=100;
    printf("%d\n" , num);
    printf("%d\n", *ptr);
    printf("%d\n",**dptr);

    **dptr=500;
    printf("%d\n" , num);
    printf("%d\n", *ptr);
    printf("%d\n",**dptr);

    return 0;



}