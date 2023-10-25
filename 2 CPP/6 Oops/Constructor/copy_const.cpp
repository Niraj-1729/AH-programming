// copy value of one object to another object

#include <iostream>
using namespace std;

class copy
{
    int a, b;

public:
    copy(int x, int y)
    {
        a = x;
        b = y;
    }
    copy(copy & ref){
          a=ref.a;
          b=ref.b;
           
    }
    void show (){ 
        cout<<" "<< b<<endl;
    }
};

int main()
{ 
    copy obj(10,20);
    copy obj1=obj;
    obj.show();



}