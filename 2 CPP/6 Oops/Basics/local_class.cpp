// class declared inside a function or block is called local class

// return -type function - name
// {
//     class class - name{
//                  };
//                   class-name obj
//                   obj.fun();
// }
// main()
// {
//     function-name;
// }

#include <iostream>
#include<conio.h>
using namespace std;
void fun()
{
    class A
    {
    private:
        int a, b;

    public:
        // memeber function
        void show()
        {
            cout << "enter two values :";
            cin >> a >> b;
            cout << a << " " << b;
        }
    };
    // since it is a local class, so we have to make obj here only in this block
    A obj;
    obj.show();
}

void main()
{
    fun();
}
