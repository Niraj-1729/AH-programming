#include <iostream>
using namespace std;

void printNtoOne(int n)
{
    if (n == 0)
    {
        return; //base case 
    }
    else
    {
        cout << n << " ";
        printNtoOne(n - 1);
    }
}

int main()
{
    int n; 
    cout<<"enter the value: ";
    cin >> n;
    printNtoOne(n);

    return 0;
}