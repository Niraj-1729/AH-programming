// getter and setter is used to acces private data member
// and it can be accessed inside a class

#include <iostream>
using namespace std;

class Hero
{
private:
    int score;

public:
    string subject;

    void print(){
        cout<<subject<<endl;
    }
    
    int getScore(){
        return  score;
    }

    string getSubject(){
        return subject;
    }

    void setScore(int s){
        score=s;
    }

    void setSubject(string s){
        subject=s;
    }
};

int main()
{
    Hero Niraj;
    //dot is used to access properties of a class 
    Niraj.subject="CPP"; // since subject is public so it can be accessed 
    // Niraj.score=90; score is private so it cant be accessed 
    Niraj.setScore(90);
    cout<<Niraj.getScore()<<endl;; 
    

    return 0;
}