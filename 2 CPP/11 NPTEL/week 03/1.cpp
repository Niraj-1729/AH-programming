/* A constructor has only one public modifier
         A constructor is never is inherited and overriden
       Each and evry class has its own constructor
      default constructor ir explicitly created by user


 */
/*
#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A() // constructor is made same as name of class
    {
        a = 100;
    }
    void show()
    {
        cout << a;
    }
};

int main()
{
    A obj = A();
    obj.show();  //constructor is called

    return 0;
}

*/

// self constructor
#include <iostream>
using namespace std;

class A
{
public:
    int a;
    // A() // constructor is made same as name of class
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
    // A obj = A(); // constructor  is created and initialized
    // obj.show();  //constructor is called
    // since constructor is created by compiler so we need to create object and call it
    A obj;
    obj.show(); // we got a garbage value

    return 0;
}

// how to make object 
// if constructor is made by compiler -> A obj;
// if we create constructor then -> 
// A obj= A(); object is created and initialized 
// obj.show();