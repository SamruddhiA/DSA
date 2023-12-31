// Implement two stacks in an array

// #include <bits/stdc++.h>
// using namespace std;

// struct Twostacks
// {
//     int *arr, capacity, top1, top2;

//     Twostacks(int n)
//     {
//         capacity = n;
//         top1 = -1;
//         top2 = capacity;
//         arr = new int[n];
//     }

//     void push1(int x)
//     {
//         if (top1 < top2 - 1)
//         {
//             top1++;
//             arr[top1] = x;
//         }
//     }

//     void push2(int x)
//     {
//         if (top1 < top2 - 1)
//         {
//             top2--;
//             arr[top2] = x;
//         }
//     }

//     int pop1()
//     {
//         if (top1 >= 0)
//         {
//             int x = arr[top1];
//             top1--;
//             return x;
//         }
//         else
//         {
//             exit(1);
//         }
//     }

//     int pop2()
//     {
//         if (top2 >= 0)
//         {
//             int x = arr[top2];
//             top2++;
//             return x;
//         }
//         else
//         {
//             exit(1);
//         }
//     }
// };
// int main()
// {
//     Twostacks t(4);
//     t.push1(10);
//     t.push1(20);
//     t.push2(60);
//     t.push2(50);
//     t.push1(5);
//     cout << "Top element in first stack is: " << t.top1 << endl;
//     t.pop1();
//     cout << "Now the top element in first stack is: " << t.top1 << endl;
// }

#include <bits/stdc++.h>
using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    // Constructor
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }

    // Method to push an element x to stack1
    void push1(int x)
    {
        // There is at least one empty
        // space for new element
        if (top1 > 0)
        {
            top1--;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow"
                 << " By element : " << x << endl;
            return;
        }
    }

    // Method to push an element
    // x to stack2
    void push2(int x)
    {

        // There is at least one empty
        // space for new element
        if (top2 < size - 1)
        {
            top2++;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow"
                 << " By element : " << x << endl;
            return;
        }
    }

    // Method to pop an element from first stack
    int pop1()
    {
        if (top1 <= size / 2)
        {
            int x = arr[top1];
            top1++;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }

    // Method to pop an element
    // from second stack
    int pop2()
    {
        if (top2 >= size / 2 + 1)
        {
            int x = arr[top2];
            top2--;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
            exit(1);
        }
    }
};

/* Driver program to test twoStacks class */
int main()
{
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}