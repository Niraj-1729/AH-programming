// implementing doubly ended queue
#include <iostream>
#include <queue>
using namespace std;

class ClrQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    ClrQueue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // Queue is full
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full, cannot insert" << endl;
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

    void pop()
    {
        // empty check;
        if (front == -1)
        {
            cout << "Queue is empty, can't pop anything" << endl;
        }
        // single element
        else if (front == rear)
        {
            arr[front] = -1; // popped element
            front = -1;      // pointers set to zero
            rear = -1;
        }
        // circular flow
        else if (front == size - 1)
        {
            front = 0;
        }

        // normal flow
        else
        {
            front++;
        }
    }
};

int main()
{

    return 0;
}