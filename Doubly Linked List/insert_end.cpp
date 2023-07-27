// Insert at the end of Linked List

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

Node *insertend(Node *head, int data)
{
    Node *curr = head;
    Node *temp = new Node(data);

    if (head == NULL)
    {
        temp->prev = NULL;
        return temp;
    }

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;
    temp->next = NULL;

    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);

    head->next = temp1;
    temp1->prev = head;

    Node *inserted = insertend(head, 30);

    print(inserted);

    return 0;
}