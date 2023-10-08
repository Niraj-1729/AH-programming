#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwoLog(int n)
{
    // logic :- take log2(n) if it is integer then num is pow of two
    if (n == 0)
    {
        return 0;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}

bool isPowerOfTwoMod(int n)
{
    // logic:- Keep dividing the number by two, i.e, do n = n/2 iteratively. In any iteration, if n%2 becomes non-zero and n is not 1 then n is not a power of 2. If n becomes 1 then it is a power of 2.
    if (n == 0)
    {
        return 0;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return 0;
        }
        n = n / 2;
    }

    return 1;
}

bool isPowerOfTwoBits(int n)
{
    // Logic:- All power of two numbers has only a one-bit set. So count the no. of set bits and if you get 1 then the number is a power of 2. Please see Count set bits in an integer for counting set bits.
    /* First x in the below expression is for the case when
     * x is 0 */
    int cnt = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            cnt++;
        }
        n = n >> 1; // keep dividing n by 2 using right
                    // shift operator
    }

    if (cnt == 1)
    { // if cnt = 1 only then it is power of 2
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter val:- ";
    cin >> n;
    isPowerOfTwoLog(n) ? cout << "YES" << endl : cout << "NO" << endl;
    isPowerOfTwoMod(n) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}