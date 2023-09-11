#include <iostream>
using namespace std;

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        int A, B, C, D;
        cin >> A, B, C;
        D = (A + B) / C;

        if (D > A & B)
        {
            cout << "YES";
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
