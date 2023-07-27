#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void pushAtFront(Node **head, int value)
{
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

int getC1(Node *head)
{
    int c = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        c += 1;
        curr = curr->next;
    }
    return c;
}

int getC2(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
        return 1 + getC2(head->next);
}

int main()
{
    Node *head = NULL;

    pushAtFront(&head, 22);

    pushAtFront(&head, 23);

    pushAtFront(&head, 26);
    pushAtFront(&head, 20);

    cout << "iterative length: " << getC1(head) << endl;
    cout << "recursive lenght: " << getC2(head);
    return 0;
}