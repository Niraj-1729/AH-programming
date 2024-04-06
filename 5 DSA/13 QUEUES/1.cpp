#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // creation
    queue<int> q;
    // insertion 
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    // size
    cout<<"size of queue is: "<<q.size()<<endl;
    //removal
    q.pop();
    cout<<"size of queue after removal "<<q.size()<<endl;
    //check empty
    if(q.empty()){
        cout<<"queue id empty"<<endl;
    }
    else {
        cout<<"Queue is empty"<<endl;
    }
    //front element 
    cout<<"front element is "<<q.front();


    return 0;
}