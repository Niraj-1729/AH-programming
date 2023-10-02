#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 1); // where 5 is final size and we have initialized the vetor with 1
    cout << " print a:-";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    //
    vector<int> last(a);
    cout << " print last:-";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    //
    vector<int> v;
    cout << "Capacity:-" << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity:-" << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity:-" << v.capacity() << endl;

    v.push_back(10);
    cout << "Capacity:-" << v.capacity() << endl;

    v.push_back(9);
    cout << "Capacity:-" << v.capacity() << endl;

    v.push_back(15);
    cout << "Capacity:-" << v.capacity() << endl;
    cout << "Size" << v.size() << endl;
    //
    cout << "Element at 2nd index:-" << v.at(2) << endl;
    cout << "First Element:- " << v.front() << endl;
    cout << "Last Element:- " << v.back() << endl;
    //
    cout << "before pop:-" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //
    v.pop_back();
    cout << "Element after  pop_back" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //
    cout << "Clear the vector(size=0, capacity != 0):-" << endl;
    v.clear();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //
    v.begin();

    return 0;
}