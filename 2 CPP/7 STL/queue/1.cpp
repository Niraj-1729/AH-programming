#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Niraj");
    q.push("Kumar");
    q.push("Singh");
    cout << "size of stack: " << q.size() << endl;
    q.pop();
    cout << "size of stack after pop: " << q.size() << endl;
    cout << "first element: " << q.front() << endl;
    cout << "Size after pop: " << endl;

    return 0;
}