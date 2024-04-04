// divide a number by zero
#include <iostream>
using namespace std;

int main()
{
    int  num;
    int denum;
    int output;
    cin>>num;
    cin>>denum;
    try
    {
        if(denum==0){
            throw(denum);
        }
        else output=num/denum;
    }
    catch(int denum)
    {
         cout<<"you cannot divide anything by zero"<<endl;
    }
    cout<<"After divison the output is: "<<output;
    
    return 0;
}