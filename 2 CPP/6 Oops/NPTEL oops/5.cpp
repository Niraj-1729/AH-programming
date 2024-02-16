// this keyword store address of current object and it is a pointer 
#include <iostream>
using namespace std;

class Hero
{
private:
    int score;

public:
    string subject;
    int roll;
    string gf;

    // default constructor
    Hero()
    {
        cout << "constructor" << endl;
    }

    // parametrized constructor
    Hero(int score)
    {
        cout << "this->" << this << endl;
        this->score = score;
    }
    Hero(int score, int roll)
    {
        this->roll=roll;  // this->roll is of public roll and again "roll " is of the current scope roll 
        cout << "this->" << this << endl;
        this->score = score;
    }
    void print(){
        cout<<roll<<endl;
    }

    void setScore(int s)
    {
        score = s;
    }
    int getScore()
    {
        return score;
    }
};

int main()
{
    Hero tt;  
    Hero Niraj(10);
    cout << "address of Niraj" << &Niraj << endl;
    Niraj.print();
    Hero *Suraj = new Hero(11);
    Suraj->print();
    Hero temp(22,23);
    temp.print();
    return 0;
}