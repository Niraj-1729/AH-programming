#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    test()
    {
        cout << "Enter values";
        cin >> a >> b;
        cout << a << ends << b << endl;
    }
    test(int x, int y)
    {
        a = x;
        b = y;
        cout << a << ends << b << endl;
    }
    test(test &obj)
    {
        a = obj.a;
        b = obj.b;
        cout << a << ends << b;
    }
};

int main()
{
    test ob, ob2(10, 20);
    test ob3(ob2);
}