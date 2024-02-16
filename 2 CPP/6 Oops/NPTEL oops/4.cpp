// costructor
/*
  No return type 
  no i/o parameter
  creates during object creation 
  and calls during object creation by default

*/
#include <iostream>
using namespace std;

class Hero{
    private:
    int score;
    public:
    string subject;
    int roll;
    string gf;

    Hero(){
        cout<<"constructor"<<endl;
    }

    void setScore(int s){
        score=s;
    }
    int getScore(){
        return score;
    }

};


int main()
{
    cout<<"Hi"<<endl;
    Hero Niraj;
    //default constructor will get caled by default 
    cout<<"hello"<<endl;
    Hero *Suraj=new Hero;
    cout<<"break"<<endl;
    Hero *Sunil=new Hero();
    cout<<"break"<<endl;

    return 0;
}