#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} * Head, *first = NULL, *temp, *last;

void circularCreate(int A[], int n)
{
    int i = 0;
    Head = new Node;
    Head->data = A[i];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void circularDisplay(Node *h)
{
    do
    {
        printf(" %d ", h->data);
        h = h->next;
    } while (h != Head);
    cout << " ";
}

int count(Node *p)
{
    int c = 0;
    int flag = 0;
    do
    {
        c++;
        p = p->next;
    } while (p != Head);
    return c;
}

void Insert(Node *p, int index, int value)
{
    int i;
    Node *temp = NULL;
    temp = new Node;
    if (index < 0 || index > count(p))
    {
        return;
    }
    temp->data = value;
    if (index == 0)
    {
        last->next = temp;
        temp->next = Head;
        Head = temp;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
}

void Delete(Node *p, int index)
{
    int i = 0, x;
    Node *q = NULL;
    if (index < 0 || index > count(p))
        return;

    if (index == 0)
    {
        q = Head;
        last->next = Head->next;
        Head = Head->next;
        x = q->data;
        delete q;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
}

int Search(Node *p, int key)
{
    int i = 0;
    do
    {
        i++;
        if (p->data == key)
        {
            return key;
            break;
        }
        p = p->next;
    } while (p != Head);
    return 0;
}
