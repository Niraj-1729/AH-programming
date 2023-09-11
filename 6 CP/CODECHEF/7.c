 #include<stdio.h>
 int main()
 {
     int total;
     int c,d;
     scanf("%d", &c);
     scanf("%d", &d);
   
    total=sum(c,d);
    printf("The total is: %d", total);
    return 0;
 }
 
 int sum (int a,int b)
 {
     int s;
     s=a+b;
     return s;
 }