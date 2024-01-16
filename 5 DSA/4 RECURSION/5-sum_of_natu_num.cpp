// sum of natural number

#include <iostream>
using namespace std;

int GetSum(int n)
{
    if (n==0)
    {
        return 0;
    }
     return n+GetSum(n-1);
    
}

int main()
{
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    cout<<GetSum(n);
    return 0;
}