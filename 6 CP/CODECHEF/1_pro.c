
#include<stdio.h>
int main()
{
    int x;
    int y;
    if (x>y)

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d",&y);

  if (y>x)
  {
    printf("PROFIT");
  }
  
  else if (x>y)
  {
    printf("LOSS");
  }
  
 else
  {
      printf("NEUTRAL");
  }
  return 0;
  
    
}