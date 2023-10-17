#include <iostream>
using namespace std;

int count = 0;
void baseCase()
{
    if (count == 4)
    {
        return;
    }
    cout << count << endl;
    count++;
    baseCase();
}

void print()
{
    cout << "I love you" << endl;
    cout << "And I miss you" << endl;
    print();
}

int main()
{
    // print();
    baseCase();
    return 0;
}