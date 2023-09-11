#include<iostream>
#include<array>
using namespace std;
 
int main()
{
    int basic[3]={2,5,8};
    //stl array is also a kind of static array, so we don't use it in cp
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"Element at 2nd index:"<<a.at(2)<<endl;
    cout<<"Empty or not:- "<<a.empty()<<endl;
    cout<<"First Element:- "<<a.front()<<endl;
    cout<<"Last Element:- "<<a.back()<<endl;
    //timr complexity:- O(1);
    
 
 return 0;
}