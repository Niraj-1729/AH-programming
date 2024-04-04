// person who is less than 25 years is not allowed to drink in the club

#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;
    try
    {
        if (age >= 24)
        {
            cout << "You have access to drink the alcohol" << endl;
        }
        else {
            throw(age);
        }
    }
    catch (int age)
    {
        cout<<"You don't have the access to drink the alcohol because your age is less than 25"<<endl;
        cout<<"your age is:-"<<age;
    }

    return 0;
}

/*
try:- assume that error will take place
catch:- this part identifies which exception had occured
Throw:- when a program encounters error, it throws as exception

try block can have more than one catch block
*/