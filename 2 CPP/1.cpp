#include <iostream>
using namespace std;

int main()
{
    int num=5; // memory has block of num, num has a address and we access this value through address of block 
    cout<<num<<endl;

    //address of operator  -&
    cout<<"address of num-: "<<&num<<endl;    // if we can get this address we can access the element 

    

    return 0;
}