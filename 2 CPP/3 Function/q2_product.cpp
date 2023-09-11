#include <iostream>
using namespace std;

int product(int x, int y)
{
    return x*y;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
}