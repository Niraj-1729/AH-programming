#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    //    int n;
    //    cin>>n;
    // int arr[n];
    // bad practice because it stores value of n in stack and that is a very small memory and in case value of n is greater than the memory allocate to stack then the program will crash and therefore the comcept of dynamic memory comes where we can store the the length of array at run time in heap

    // new to access heap memory
    // new char;   // returns address of memory // you cant give name to it
    // new int;

    char ch = 'a';
    cout << sizeof(ch) << endl;
    // char * ch= new char;  //syntax; total 9 byte ( 1 of pointer at stack and 8 of character a heap)

    char *c = &ch;
    cout << sizeof(c) << endl;

    int *arr = new int[5];

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << ans;

    return 0;
}