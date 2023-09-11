// C++ Program to Insert an element
// at a specific position in an Array
#include <iostream>
using namespace std;

void insertElemnt(int arr[], int n, int x, int pos)
{
    for (int i = 0; i <= pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
}


int main()
{
    int arr[15]={2,4,5,6,1,2,3};
    int n=5;
    cout<<"Before Insertion:-";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    int x=10, pos=2;
    insertElemnt(arr,n,x,pos);
    n++;
    cout<<"After Insertion:- ";
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
    
    

    return 0;
}