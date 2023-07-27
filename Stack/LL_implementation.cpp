// Implementation of stack using Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    int data;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Stack
{
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp;
        temp->data = x;
        temp->next = head;
        head = temp;

        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;

            return;
        }

        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;

        size--;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        cout << "Top element is: " << head->data << endl;
        return head->data;
    }
    int Size()
    {
        return size;
    }
    int empty()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return 1;
        }
        else
        {
            cout << "Stack is full" << endl;
            return 0;
        }
    }
};
int main()
{
    Stack s1;
    s1.empty();

    s1.push(7);

    s1.push(9);

    s1.pop();

    s1.push(10);

    s1.top();

    s1.Size();

    s1.empty();

    return 0;
}
