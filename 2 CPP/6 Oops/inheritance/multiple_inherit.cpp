#include<iostream>
using namespace std;


class A {
    public : 
    A (){
        cout<<"Constructor of A "<<endl;
    }
};

class B {
     public : 
     B(){
        cout<<"Constructor of B is Called"<<endl;
     }
};

class C : public A, public B{
   public: 
   C(){
    cout<<"constructor of C is called "<<endl;
   }
};

int main (){
    C c;
}
