#include<iostream>
using namespace std;

class A {
   private:
   int a=10, b=10;
   public : 
   void show (){
         cout<<a<<" "<<b<<endl;
   }
   
   friend class B;


};

class B{
    public : 
    // it is a member function 
    void add (A r1) {
        int add = r1.a+r1.b;
        cout<<"sum of A & B : "<<add;
    } 
};

main (){
    A obj;
    B obj2;
    obj.show();
    obj2.add(obj);
    // cout<<obj.a<<endl;   cant access because it is private type 
    // obj.show();
}