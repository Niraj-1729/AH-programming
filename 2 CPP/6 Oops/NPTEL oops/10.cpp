// static keyword  can we used without object creation
// it had no this keyword
// static function can access only static members 
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
    static int money;

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

    // static function
    static int random(){
        // cout<<roll<<endl;
        return money;
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
    // destructor
    ~Hero()
    {
        cout << "Destructor is Called" << endl;
    }
};

// datatype classname::datamembername= value;
int Hero::money = 50;

int main()
{
    // cout << Hero::money << endl;
    // Hero Niraj;
    // cout<<Niraj.money;
    cout<<Hero::random()<<endl;

    return 0;
}