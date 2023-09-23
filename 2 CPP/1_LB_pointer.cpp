#include <iostream>
using namespace std;

int main()
{
    int num = 5;         //  memory has block of num, num has a address and we access this value through address of block
    cout << num << endl; // 5

    // address of operator  -&
    cout << "address of num-: " << &num << endl; //  0x61ff0c if we can get this address we can access the element

    // address is stored in pointer
    int *ptr = &num; // created a pointer and given it a address of num
    // ptr is a pointer of type "int"

    cout << *ptr << endl; //*ptr=num=5  //* is a dereference operator
    cout << ptr << endl;  // ptr will store add of num ptr=&num

    num++;
    cout << num << " " << *ptr << endl; // both is same "6"

    double d = 4.3;
    double *p2 = &d;

    cout << "size of interger is:-" << sizeof(num) << endl;
    cout << "size of pointer is:-" << sizeof(ptr) << endl;
    cout << "size of double is:-" << sizeof(d) << endl;
    cout << "size of p2 is:-" << sizeof(p2) << endl;

    // pointer to int is created, and pointing to some garbage address
    //  int*p=0; pointing to null so segementation fault
    int *p;
    cout << *p << endl;

    int i = 5;
    int *p3 = 0; // initialized as null pointer and then went to giving it a memory address
    p3 = &i;
    // int *p3 = &i;
    cout << *p3 << endl;
    cout << p3 << endl;

    int number = 10;
    int a = number;
    a++;
    // ++a;
    cout << number << endl;

    int *ptr1 = &number;
    (*ptr1)++;
    cout << *ptr1 << " " << number << endl;

    // copying a pointer
    int *ptr2 = ptr1;
    cout << ptr2 << " " << ptr1 << endl;
    cout << *ptr2 << " " << *ptr1 << endl;

    //pointer arithmetic
    int n=3;
    int *t=&n;
    // (*t)++;
    // cout<<(*t)++<<endl; //3
    *t=*t+1;   //value stored at addrss t is increased
    cout<<*t<<endl; //4
    cout<<t<<endl;
    t=t+1;
    cout<<t; // moved to next 4ht address 0x61fed4 - 0x61fed8

    return 0;
}

