#include <iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "It's class A ";
    }
};

class B : public A
{
public:
    void disp()
    {
        cout << "It's class B ";
    }
};

int main()
{
    B obj; // we are making obje of class of B and calling fun in class A
    obj.A::disp(); // calling 
    // obj.disp();
}