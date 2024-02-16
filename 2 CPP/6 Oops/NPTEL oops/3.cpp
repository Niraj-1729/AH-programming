//static and dynamic allocation 

#include<iostream>
using namespace std;

class Hero{
    private:
    int score;
    public:
    string subject;
    int roll;
    string gf;

    void setScore(int s){
        score=s;
    }
    int getScore(){
        return score;
    }

};
 
int main()
{
    // dynamic allocation
    Hero *Suraj=new Hero;
    Suraj->setScore(99);
    cout<<Suraj->getScore();
    cout<< (*Suraj).subject<<endl;
    cout<<Suraj->subject<<endl;

    // static allocation ofobject
    Hero Niraj; // making a object

    //accessing objects
    Niraj.subject= "Programming";
    cout<<Niraj.subject<<endl;
    Niraj.roll=2021021048;
    cout<<Niraj.roll<<endl;
    Niraj.setScore(98);
    cout<<Niraj.getScore()<<endl;

 
 
 return 0;
}