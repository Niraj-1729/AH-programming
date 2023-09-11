#include<iostream>
using namespace std;

// class {
    
// };

void showInfo(int age){
    cout<<age<<endl;
}

void showInfo(string name){
    cout<<name<<endl;
}

void showInfo(double salary){
    cout<<salary<<endl;
}

int main () {
      showInfo(23);
      showInfo("Niraj");
      showInfo(15.30);
}