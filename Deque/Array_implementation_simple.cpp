#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int *arr;
    int cap, size;

    Deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    bool isFull()
    {
        return (size == cap);
    }

    void insertFront(int x)
    {
        if (isFull())
        {
            return;
        }
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void insertRear(int x)
    {
        if (isFull())
        {
            return;
        }
        arr[size] = x;
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

    void deleteFront()
    {
        if (isEmpty())
        {
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return (arr[size - 1]);
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return (arr[0]);
        }
    }
};
