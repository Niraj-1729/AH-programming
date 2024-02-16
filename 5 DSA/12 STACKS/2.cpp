// Stack implementation using array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int *arr; // pointer to memory location
    int size; // size of array
    int top;  // index of last element of array

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space avilable
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }


    void pop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "Stack is empty" << endl;
        } 
        else
        {
            // stack is not empty
            top--;
        }
    }


    int getTop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "Stack is empty" << endl;
        } 
        else
        {
            return arr[top];
        }
    }


    bool isEmpty()
    {
        if(top==-1){
            return true;
        }
        else return false;
    }


    //number of valid elements in stack
    int getSize()
    {
        return top+1;
    }

};

int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Size of stack is: "<<s.getSize()<<endl;
    s.pop();

    return 0;
}