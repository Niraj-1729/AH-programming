#include <stdio.h>

int main()
{
    int frequency;
    printf("Enter the range of frequency:", frequency);
    scanf("%d", &frequency);

    if (frequency >= 67 &&  frequency <= 45000)
    {
        printf("yes");
    }

    else
        printf("no");

    return 0;
}
