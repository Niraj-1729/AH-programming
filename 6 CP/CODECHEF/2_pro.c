#include <stdio.h>
#define MAX 100

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, count = 0;
        scanf("%d", &n);
        int A[MAX];
        int C[MAX];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        int B[MAX];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &B[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if ((A[i] != 0 && B[i] != 0) || (A[i] == 0 && B[i] == 0))
            {
                C[i] = 0;
                count++;
            }
            else
            {
                C[i] = count;
                continue;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (i == n)
            {
                C[i] = count;
                break;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (C[0] < C[i])
            {
                C[0] = C[i];
            }
        }

        printf("%d", C[0]);
    }
    return 0;
}
