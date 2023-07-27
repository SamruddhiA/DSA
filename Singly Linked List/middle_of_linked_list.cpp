// Middle of Linked List

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
// void middle_sort(Node *head)
// {
//     Node *curr = head;
//     int count = 0;

//     for (curr = head; curr != NULL; curr = curr->next)
//     {
//         count++;
//     }

//     for (int i = 0; i < (count / 2); i++)
//     {
//         curr = curr->next;
//     }
//     cout << curr->data;
// }
Node *middle(Node *head)
{
    int n = 0;
    Node *temp = head;
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    temp = head;

    for (int i = 0; i < n / 2; i++)
    {
        temp = temp->next;
    }

    return temp;
}
// Node *middle(Node *head)
// {
//     Node *temp = head;
//     int count = 0;

//     //- finding length of LL : O(n)
//     while (temp)
//     {
//         count++;
//         temp = temp->next;
//     }

//     // pointing temp to head again
//     temp = head;
//     int nodeNo = count / 2 + 1; // doesn't matter if count is odd or even

//     //-Time: O(k-1)
//     // If I want to reach kth node, I need to go k-1 deep
//     for (int i = 1; i <= nodeNo - 1; i++)
//     {

//         temp = temp->next;
//     }
//     head = temp;
//     return head;
// }
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

    // middle_sort(head);

    Node *middleelement = middle(head);

    cout << middleelement->data;

    // print(middleelement);
    return 0;
}