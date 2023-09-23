#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 10, 15, 67}; // integer so 4byte -: total memory=4*10=40 byte

    // name of array points to first location of array address
    cout << arr << " " << &arr << " " << &arr[0] << " " << &arr[1] << endl; // 0x61fee8

    cout << *arr << endl;       // 2
    cout << *(arr + 1) << endl; // 10
    cout << *arr + 1 << endl;   // 2+1=3
    cout << *(arr) + 1 << endl; // 2+1=3
    cout << arr[2] << " " << *(arr + 2) << endl;

    // formula  arr[i]= *(arr+i);
    // formula  or i[arr]= *{i+arr};
    int i = 3;
    cout << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(&ptr) << endl;
    cout << sizeof(*ptr) << endl;

    return 0;
}