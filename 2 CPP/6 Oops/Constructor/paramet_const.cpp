#include <iostream>
using namespace std;

class Prem
{
private:
    int a, b;

public:
    Prem(int X, int Y)
    {
        // since x,y is local variable so it need to be copied in other variable
        a = X;
        b = Y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};

int main()
{
    Prem obj(10,20);
    obj.show();
}