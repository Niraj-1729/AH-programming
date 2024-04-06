#include <iostream>
#include <queue>
using namespace std;

class DeQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    DeQueue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push_rear(int data)
    {
        // Queue is full
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full, cannot insert" << endl;
            return;
        }

        // single element case
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] == data;
        }
        // circular nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal flow
        else
        {
            rear++;
            arr[rear] = data;
        }
    }


    void push_front(int data)
    {
        // Queue is full
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full, cannot insert" << endl;
            return;
        }

        // single element case
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] == data;
        }
        // circular nature
        else if (front=0 && rear!=size-1)
        {
            front=size-1;
        }
        // normal flow
        else
        {
           front--;
        }
    }


};

int main (){

    return 0;
}