#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a, b;
        // std::cout << "Enter values for x, y, and z: ";
        std::cin >> x >> y >> z;

   
        if (b == x && b/a || b == y && b/a || b == z && b/a)
        {
            // Case 2: a is equal to the product of the remaining two numbers
            if (b == x)
            {
                a = y * z;

            }
            else if (b == y )
            {
                a = x * z;
            }
            else if (b==z)
            {
                a = x * y;
            }

            else{
                a==0, b==0;
            }
        }
        else
        {
            // If b is not equal to any of the three numbers, set a and b to zero
            a = 0;
            b = 0;
        }

        std::cout << a << " " << b << std::endl;
    }

    return 0;
}
