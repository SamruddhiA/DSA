#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int data;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *back;

public:
    void enquque(int x)
    {
        Node *n = new Node(x);

        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        n = back;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "No elements" << endl;
            return;
        }
        Node *todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No element" << endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL || front > back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.enquque(10);
    q.enquque(20);
    q.enquque(30);
    q.enquque(40);
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.empty() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.empty() << endl;

    return 0;
}
