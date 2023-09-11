#include <iostream>
using namespace std;

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        float A, B, C, D;
        cin >> A>>B>> C;
        D = (A + B) / 2;

        if (D > C)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
