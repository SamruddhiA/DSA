// Insert at the beginning of circular linked list

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
Node *insert_begin(Node *head, int x)
{
    Node *temp = head;
    if (head == NULL)
    {
        temp = temp->next;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        temp->data = head->data;
        temp->data = t;

        return head;
    }
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
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    insert_begin(head, 5);

    print(head);

    return 0;
}