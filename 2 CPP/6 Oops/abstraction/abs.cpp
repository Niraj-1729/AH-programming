#include <iostream>
using namespace std;

class car
{
    bool startEngine;

public:
    void start()
    {
        startEngine = true;
        cout << "Engine Started :) " << endl;
    }

    void drive(){
        if (startEngine)
        {
            cout<<"you are ready to drive :)";
        }
        else{
            cout<<"Can't drive the car";
        }
        
    }
};

int main()
{
    car c;
    c.start();
    c.drive();
    return 0;
}