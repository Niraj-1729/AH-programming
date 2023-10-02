#include <iostream>
using namespace std;

// return by reference 
int &fun (int a){
    int num=a;
    int & ans= num;
    return ans;  //  scope to only this block 
}


void update(int n) // copy of variable is created 
{
    n++;
}
void update2(int &n) //creating reference variable and using same memory location 
{
    n++;
}

int main()
{
    /*
    int i = 5;
    int &j = i; //reference variable if i is j
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

    // why reference variable
    //  due to concept of pass by value and pass by reference
    //   we need to create a reverence variable in order to refelect the changes as we send the copy of variable in function and return only the copy but not reference

    int n = 5;
    // cout << " before value of n:- " << n << endl; // 5
    // update1(n);
    // cout << "after value of n:- " << n << endl; // 5 no change
    cout << " before value of n:- " << n << endl; // 5
    update2(n);
    cout << "after value of n:- " << n << endl; // 6 no change because of reference variable

    return 0;
}