// count number of set bits/ number of 1s in a number
#include <iostream>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
    // time:- theta(log n )
    // space:- O(1)
}

unsigned int optCountSetBits(unsigned int n)
{
    unsigned int count =0;
    while (n)
    {
        n&=(n-1);
        count ++;
    }
    return count;
    
    /*  subtract 1 from any integer
     the rightmost set bit becomes unset, and
     all the bits on the right of the rightmost set bit are flipped
     ex- n=9 1001
         n2=8  1000
         n3=7  0111

     ------brian kernighans algorithm -------
     1. Initialize count := 0
       2. If integer n is not zero
         (a) do bitwise & with (n-1) and assign the value back to n
            n: n&(n-1)
         (b) Increment count by 1
         (c) go t step 2
       3.  else return count

     ex:- n=9(1001)
          count =0
          n=8(1001)

          9>0, subtract by 1 and do bitwise & with (9-1)
          n=9&8 (1001 &1000)
          n=8   (1000) result of above
          count = 1;

          8>0, subtract by 1 and do bitwise & with (8-1)
          n=8&7 (1000 &0111)
          n=0   (0000) result of above
          count = 2;

          n=0 , return count =2 and terminate the loop */
}

int main()
{
    int i;
    cout << "Enter NUM:-";
    cin >> i;
    cout << optCountSetBits(i);
    return 0;

    return 0;
}

// naive:- return the value of count if 1 is found