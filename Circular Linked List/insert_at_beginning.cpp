// Insert at the head of Circular doubly linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    Node *prev;
    int data;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";

    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}
Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
    }

    temp->next = head;
    temp->prev = head->prev;
    head->prev = temp;
    head->prev->next = temp;

    return temp;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = head;
    head->prev = temp2;

    Node *test;

    test = insert(head, 5);

    print(test);

    return 0;
}