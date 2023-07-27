// Previous greater element

#include <bits/stdc++.h>
using namespace std;

void prevgreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << -1 << " ";
        }
        else
        {
            cout << s.top() << " ";
        }

        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {20, 30, 15, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    prevgreater(arr, n);
    return 0;
}