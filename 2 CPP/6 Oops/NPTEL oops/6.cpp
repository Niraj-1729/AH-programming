// copy constructor
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
}; 

int main()
{
    Hero Artificial;
    Artificial.setScore(99);
    Artificial.setSubject("Programming");
    cout << Artificial.getScore() << endl;
    cout << Artificial.getSubject() << endl;

    //   or we can use parametrised constructor to set values
    Hero Human(100, 48);
    Human.print();

    // copy constructor human in H
    Hero H(Human);
    H.print();
    return 0;
}