#include <iostream>
using namespace std;
class Ankit;
class Ankush
{
private:
    int money = 10;
    friend void Rohit(Ankit, Ankush);   // friend function 
};

class Ankit
{
private:
    int money = 20;
    friend void Rohit(Ankit, Ankush);  // friend function 
};

// friend function 

void Rohit(Ankit r1, Ankush r2){
    cout<<"SUM="<<r1.money+r2.money<<endl;
}

main (){
    Ankush obj1;
    Ankit obj2;
    Rohit(obj2, obj1);
}
