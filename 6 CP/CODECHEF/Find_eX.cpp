#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        // Check if A % B == C % D
        if (A % B == C % D)
        {
            cout << "No solution exists." << endl;
            return 0;
        }

        // Iterate over all possible values of X
        for (int X = 0; X < max(B, D); X++)
        {
            if ((A + X) % B != (C + X) % D)
            {
                cout << "X = " << X << endl;
                // cout << x << endl;
            }
        }
    }
    return 0;
}