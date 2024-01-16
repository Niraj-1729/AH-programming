#include <iostream>
using namespace std;

void printOnetoN(int n)
{
    if (n == 0)
    {
        return; //base case 
    }
    else
    {
         printOnetoN(n-1);
         cout<<n<<" "<<endl;
    }
}

int main()
{
    int n; 
    cout<<"enter the value: ";
    cin >> n;
    printOnetoN(n);

    return 0;
}