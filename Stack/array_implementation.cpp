// Array Implementation of Stack

#include <bits/stdc++.h>
using namespace std;

#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element to return" << endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.Top() << endl;

    s.pop();

    cout << s.Top() << endl;

    return 0;
}