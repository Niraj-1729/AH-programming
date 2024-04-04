// banking system 
#include<iostream>
#include<stdexcept>
using namespace std;

int main (){

    double bal =1000.0;
    double amt;
    try
    {
        //Deposite 
        cout<<"Enter Deposite amount: ";
        cin>>amt;
        if (amt<=0)
        {
            cout<<"invalid deposite Amount "<<endl;
        }
        bal=bal+amt;
        cout<<"Available amount:- "<<bal;

        //Withdraw
        cout<<"Enter Withdraw amount: "<<endl;
        cin>>amt;
        if (amt<=0)
        {
            __throw_invalid_argument("Invalid Deposite amount"); 
        }
        if(amt>bal){
             __throw_runtime_error("Insufficent balance"); 
        }
        bal=bal-amt;
        cout<<"Available amount:- "<<bal;
        
    }
    catch(const std::exception& e)
    {
        cout<<e.what();
    }
    

    return 0;
}