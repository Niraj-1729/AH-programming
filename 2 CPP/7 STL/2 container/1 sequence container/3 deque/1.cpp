#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // insertion and deletion at both end
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "print first index element:- " << d.at(1) << endl;
    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << "Empty or not:- " << d.empty() << endl;
    cout << "Before erase , size:-" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase:- " << d.size() ;
    for (int i : d)
    {
        cout << i << endl;
    }

    return 0;
}