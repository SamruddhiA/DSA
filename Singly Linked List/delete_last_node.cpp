// Delete last node from given linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

Node *Delete(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete (curr->next);

    curr->next = NULL;

    return head;
}
void print(Node *head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);

    head->next = first;
    first->next = second;

    Node *Linked_list = Delete(head);

    print(Linked_list);

    return 0;
}
