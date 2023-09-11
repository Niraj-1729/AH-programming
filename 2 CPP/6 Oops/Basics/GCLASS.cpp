// class declared whole the function or the block

#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter the value:";
        cin >> a >> b;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
class B: public A {
  public: 
  void disp(){
    // cout<<a<<" "<<b;
  }
};

int  main()
{
    A obj;
    obj.input();  //calling member function 
    obj.show();
}