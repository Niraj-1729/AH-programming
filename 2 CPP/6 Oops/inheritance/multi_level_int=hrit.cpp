#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void show()
    {
        cout << a << endl;
    }
};

class derived1 : public base
{
private:
    int b;

public:
    void input1()
    {
        cout << "Enter b: ";
    }
    void show1()
    {
        cout << b << endl;
    }
};

class derived2 : public derived1
{
private:
    int c;

public:
    void input2()
    {
        cout << "Enter c: ";
        cin>>c;
    }
    void show2()
    {
        cout << c << endl;
    }
};

int main()
{
    base obj;
    //    derived1 obj1;
    //    derived2 obj2;

    obj.input();
    obj.show();
    //    obj1.show1();
    //    obj1.input1();
    //    obj2.show2();
    //    obj2.input2();
    return 0;
}