// class  declared or contained inside another class is called nested class

#include <iostream>
using namespace std;

class A
{
public:
    class B // its member variable of class A
    {
        int a, b;

    public:
        void Input()
        {
            cout << "Enter values of a,b: ";
            cin >> a >> b;
        }
        void Output()
        {
            cout << a << " "<<b << endl;
        }
    };
};
int main()
{
    A:: B obj;
    obj.Input();
    obj.Output();
}