#include<iostream>
#include<string>
using namespace std;
int main (){
     string str = "Hello world";
     cout<<str<<endl;
     cout<<str.length();
     for (size_t i = 0; i < str.length(); ++i)
     {
        /* code */
        cout<<"characters at index " << i<<":" <<str[i]<<endl;
     }
     

    return 0;
}