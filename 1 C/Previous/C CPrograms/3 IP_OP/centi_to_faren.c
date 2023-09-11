#include <stdio.h>
int main()
{

    float farenheit, celcius;
    printf("Enter Farenheit: \n");
    scanf("%f", &farenheit);
    celcius = (farenheit - 32) * 5 / 9;
    printf("Celcius: %f \n", celcius);
    return 0;
}