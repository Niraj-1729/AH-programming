 #include <stdio.h>

double square(double num)
{
    return (num * num);
}
int main()
{
    int num;
    double n;
	 
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}
