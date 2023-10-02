#include <iostream>
using namespace std;

/*
return -type function name(parameter1, parameter 2)
{
    statement;
}
 */

void hello()
{
    cout << "Artificial Human" << endl;
    return;
}

int add (int num1, int num2){
    int sum= num1+num2;
    return sum;
}
// int add (int num1, num2, num3){

// }

int main()
{
    hello();
    int a,b;
    cin>>a>>b;
    // add(a,b);
    cout<<add(a,b)<<endl;

    return 0;
}