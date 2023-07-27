// Detect a loop in linked list

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
bool loop(Node *head)
{
    Node *temp;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL)
        {
            return false;
        }
        if (curr->next == temp)
        {
            return true;
        }
        Node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(30);
    Node *temp4 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    cout << loop(head);

    return 0;
}
