#include <iostream>
using namespace std;

int getSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return getSum(n / 10) + n % 10;
    }
}

int main()
{
    int n;
    cout << "enter the digit: ";
    cin >> n;
    cout << getSum(n);

    return 0;
}