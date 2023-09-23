#include <iostream>
using namespace std;

void print(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}

void update(int *ptr){
    ptr=ptr+1;
    cout<<"inside"<<" "<<ptr<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;

}

int main()
{
    int value = 5;
    int *ptr = &value;
    // print(ptr);
    cout<<ptr<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    update(ptr);



    return 0;
}