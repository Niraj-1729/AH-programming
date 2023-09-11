 #include<stdio.h>
int main()
{
   int i, n, sum;

   printf("enter the number that you want:");
   scanf("%d" , &n);

   for ( i = 1; i<=n; i++)
   {
    //  sum= sum+i;
     printf("%d " , i);
   }
   printf("sum=%d", sum);
return 0;
}