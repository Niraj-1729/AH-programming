#include<iostream>
using namespace std;

void sayHello(){
    cout<<"HELLO WORLD"<<endl;
}

int add(int a, int b){
      return a+b;
}

int main (){
    int num1=5;
    int num2=5;
    int sum =add(num1, num2);
    cout<<sum<<endl;
    sayHello();
    return 0;
}