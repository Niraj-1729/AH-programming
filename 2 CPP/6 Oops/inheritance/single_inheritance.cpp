// derived class can only access through protected access modifier of base class
// derived class can access member function of base class when it is public
// we can call member function of base class through object of derived class

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b,c,d;

public:
    void show()
    {
        cin >> a >> b;
        cout << "base:"<<a << b << endl;
    }
};

class derived: public base 
{
private:
    int m, n;

public:
    void disp()
    {
        cin>>m>>n>>c>>d;
        cout<<"derived"<<m<<n<<c<<d;
    }
};

int main()
{
    base obj1;
    derived obj2;
    obj1.show();
    obj2.disp();
    obj2.show();
    return 0;
}