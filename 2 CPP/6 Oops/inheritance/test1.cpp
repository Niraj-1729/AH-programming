#include<iostream>
using namespace std;

class Father {
    protected: 
    string surname="Singh";
};

class son1: Father{
    string name= "Sunil";
         public:
         void show(){
            cout<<name<<" "<<surname<<endl;
         } 

};

class son2: Father{
     string name="suraj";
     public: 
     void disp(){
        cout<<name<<" "<<surname<<endl;
     }
};

int main () {
    son1 obj1;
    obj1.show();
    son2 obj2;
    obj2.disp();



    return 0;
}