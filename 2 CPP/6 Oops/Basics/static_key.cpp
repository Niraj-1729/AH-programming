#include <iostream>
using namespace std;

class A
{
    int a;
    static int b;

public:
    A(int x,int  y)  //A is constructor here 
    {
        a = x;
        b = y;
    }

    void Show() {
        cout<<a<<" "<<b<<endl;
    }

    static void disp(){
        //onyl static data member is accessed
        //a can't be accesed 
        cout<<b<<endl;
    }
};

// initialize static variable with 0;
int A :: b=0;
void main (){
     A obj1 (10,20), obj2 (100,200);
     obj1.Show();
     obj2.Show();
     A :: disp (); //output ==200 ; as it access only b 
    // return 0;
}
