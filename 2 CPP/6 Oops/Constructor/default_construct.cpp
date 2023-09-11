#include <iostream>
using namespace std;

class Abs
{
public:
    // constructor only accepts public modifier
    int a;

    // Abs()
    // {
    //     a = 100;
    // }
    void show()
    {
        cout << a;
    }
};

int main()
{

    // Abs obj = Abs(); // only in the case when define constructor then only we can initialize
    Abs obj;  // it is the cane when constructor is made by compiler 
    obj.show();
}