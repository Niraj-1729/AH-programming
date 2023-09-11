#include <iostream>
#include <list>
using namespace std;

// list in STL is implemented using doubly linked list
int main()
{
    list<int> l;
    list<int> n(l); //copy l;
    list<int> m(5,100); // 5 element intialized with 100
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout<<"after erase";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"endl";
    cout<<"Size of list"<<l.size()<<endl;

    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}