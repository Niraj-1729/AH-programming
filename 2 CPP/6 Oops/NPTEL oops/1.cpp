#include<iostream>
using namespace std;

class Hero{
    private: //can be accessed inside the class
    int score;
    void print(){
        cout<<score<<endl;
    }

    //access modifies
    public:
    //proprites
    int health;
    string str;

};

int main()
{
    //creation of object
    Hero ramesh;

    ramesh.health=70;
    cout<<sizeof(ramesh)<<endl;
    cout<<ramesh.health<<endl;
 
 return 0;
}