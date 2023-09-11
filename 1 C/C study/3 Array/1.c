//without macros array program

#include<stdio.h>
int main() 
{
  int a[15], i;
  for ( i = 0; i <15 ; i++)
  {
     printf(" Enter the input for index, %d:" , i);
     scanf("%d", &a[i]);
  }
  
for (  i = 0; i <15; i++)
{
   printf("%d" , a[i]);
}

return 0;
}




 