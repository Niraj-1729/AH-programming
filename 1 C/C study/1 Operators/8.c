#include <stdio.h>
int main()

{
    int day;
    Printf("Enter day number");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("Sunday");
    }
    else if (day == 2)
    {
        printf("Monday");
    }
    else if (day == 3)
    {
        printf("tuesday");
    }
    else if (day == 4)
    {
        printf("wednesday");
    }
    else if (day == 5)
    {
        printf("thursday");
    }
    else if (day == 6)
    {
        printf("Friday");
    }
    else if(day==7)
         
        {
            printf("Saturday");
        }
        else {
            printf("invalid day");
        }
    return 0;
}