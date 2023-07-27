// Median of row wise sorted matrix

#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace std;

int median(int m[R][C])
{
    int min = m[0][0];
    int max = m[0][C - 1];

    for (int i = 0; i < R; i++)
    {
        if (m[i][0] < min)
        {
            min = m[i][0];
        }

        if (m[i][C - 1] > max)
        {
            max = m[i][C - 1];
        }
    }

    int medPos = (R * C + 1) / 2;

    while (min < max)
    {
        int mid = (min + max) / 2;
        int midPos = 0;

        for (int i = 0; i < R; i++)
        {
            midPos += upper_bound(m[i], m[i] + C, mid) - m[i];
        }

        if (midPos < medPos)
        {
            min = mid + 1;
        }
        else
        {
            max = mid;
        }
    }
    return min;
}

int main()
{
    int m[R][C] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};

    cout << median(m);

    return 0;
}
