// Reverse Doubly Linked List

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
Node *reverse_ll(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    while (curr != NULL)
    {

        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }

    return prev->prev;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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

    Node *reversed = reverse_ll(head);

    print(reversed);

    return 0;
}