// destructor

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
        this->score = score;
    }
    Hero(int score, int roll)
    {
        this->roll = roll;
        this->score = score;
    }
    void print()
    {
        cout << this->roll << endl;
        cout << this->score << endl;
    }

    void setScore(int s)
    {
        score = s;
    }
    int getScore()
    {
        return score;
    }
    void setSubject(string s)
    {
        subject = s;
    }
    string getSubject()
    {
        return subject;
    }
    //destructor
    ~Hero(){
        cout<<"Destructor is Called"<<endl;
    }
};

int main()
{
    // static
    Hero Niraj;
    // dynamic
    Hero *Human = new Hero;
    delete Human; //for dynamic objects destructors are called manually 

    return 0;
}