// Efficient Solution

#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int *arr;
    int front, cap, size;
    Deque(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void deletefront()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }

    void insertRear(int x)
    {
        if (isFull())
        {
            return;
        }
        int new_rear = (front + size) % cap;
        arr[new_rear] = x;
        size++;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[cap];
        }
    }

    void insertFront(int x)
    {
        if (isFull())
        {
            return;
        }
        front = (front + cap - 1) % cap;
        arr[front] = x;
        size++;
    }

    void deleteRear()
    {
        if (isEmpty())
        {
            return;
        }
        size--;
    }
};