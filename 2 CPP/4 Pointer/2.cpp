#include <iostream>
using namespace std;

int main()
{

    int var= 20;
    int* ptr= &var;
    // or-> ptr= &var;

    // & gives address of operator
    cout<<"The address of var stored in ptr"<<&var<<endl;
    // * is dereference operartor or value at operator
    cout<<"The value at dereferenc operator (*ptr)"<<*ptr<<endl;
    *ptr =30;
    cout<<"The value at dereferenc operator (*ptr)"<<*ptr<<endl;

    //pointer to pointer 
     int **c=&ptr;
     **c=40;
     cout<<*ptr;


    return 0;
}