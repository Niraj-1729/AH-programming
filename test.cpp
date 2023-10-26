#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int *ptr = &n;
    cout<<n<<" "<<&n<<" "<<ptr<<" "<<*ptr;

    return 0;
}