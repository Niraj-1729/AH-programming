#include<stdio.h>
int fun ();

int var= 10; // globale variable vivible to all blocks but if thers is local variable availble to to a particular block then it will refer the local over golbal

int main()
{
    int var=3;
    printf("%d\n", var); //output will be 3
    fun();
    return 0;

}

int fun()
{
    printf("%d", var);
}