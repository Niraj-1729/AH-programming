#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main()
{
    int n, i;
    float arr[MAX_SIZE], sum = 0.0, mean, std_deviation = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d real numbers: ", n);
    for(i = 0; i < n; ++i)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for(i = 0; i < n; ++i)
        std_deviation += pow(arr[i] - mean, 2);

    std_deviation = sqrt(std_deviation / n);

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("Standard deviation = %.2f\n", std_deviation);

    return 0;
}