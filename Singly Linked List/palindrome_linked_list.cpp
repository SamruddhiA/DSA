// Palindrome of a linked List

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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
bool palindrome(Node *head)
{
    stack<int> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        s.push(curr->data);
    }
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.top() != curr->data)
        {
            return false;
        }
        s.pop();
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    palindrome(head);

        return 0;
}
