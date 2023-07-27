// Naive Solution

#include <bits/stdc++.h>
using namespace std;

int trade(int arr[], int start, int end)
{

    if (end <= start)
    {
        return 0;
    }
    int profit = 0;
    for (int i = 0; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int current_profit = arr[j] - arr[i] + trade(arr, start, i - 1) + trade(arr, j + 1, end);
                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}
int main()
{

    int a[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(a) / sizeof(a[0]);

    cout << trade(a, 0, n - 1);

    return 0;
}
