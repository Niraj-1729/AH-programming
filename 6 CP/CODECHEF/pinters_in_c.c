#include <stdio.h>
// int city()
// {
//     int a=6;
//     printf("%d",a);
//     printf("%d",&a);
//     return 0;
// }
// int main()
// {    
//     int a =6;
//     printf("%d",a);
//     printf("%d",&a);
//     city();
//     return 0;
// }

int main()
{
    int a , *p;
    a=6;
    p=&;
    printf("%d %d %d %d", &a,*p,a,p);
    return 0;
}