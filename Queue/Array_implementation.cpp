#include <bits/stdc++.h>
using namespace std;
#define n 20

class queue_imp
{
    int *arr;
    int front;
    int back;

public:
    queue_imp()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue_imp q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << q.peek() << endl;

    q.dequeue();

    cout << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << q.empty() << endl;

    q.dequeue();

    cout << q.empty() << endl;

    return 0;
}