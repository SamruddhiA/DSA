// Recursive traversal of Singly Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void recursive_printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";

    recursive_printList(head->next);
}
int main()
{

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);

    recursive_printList(head);

    return 0;
}