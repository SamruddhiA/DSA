// Insert at the beginning of doubly linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertbegin(Node *head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;

    if (head != NULL)
    {
        head->prev = temp;
    }

    return temp;
}

int main()
{
    Node *head = new Node(20);
    Node *temp1 = new Node(30);

    head->next = temp1;
    temp1->prev = head;

    Node *inserted = insertbegin(head, 10);

    print(inserted);

    return 0;
}