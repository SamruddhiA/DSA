// Middle of Linked List

// Efficient Solution

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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void middle_sort(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *slow = head;
    Node *Fast = head;
    while (Fast != NULL && Fast->next != NULL)
    {
        slow = slow->next;
        Fast = Fast->next->next;
    }
    cout << slow->data;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    Node *temp5 = new Node(60);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;

    middle_sort(head);

    return 0;
}