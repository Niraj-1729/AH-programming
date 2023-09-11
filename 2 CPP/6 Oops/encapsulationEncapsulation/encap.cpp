#include <iostream>
using namespace std;

class encap
{
private:
    int age;
    void show()
    {
        cout << "Ankush";
    }

public:
    string name;
    void setData(int a)
    {
        age = a;
        show();
        cout << age;
    }
};

int main()
{
    encap E;

    E.name = "Niraj";
    E.setData(23);
    // E.show();
    cout << " " << E.name << endl;
}