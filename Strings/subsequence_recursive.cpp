// Check if string is a subsequencce of other

#include <bits/stdc++.h>
using namespace std;

bool subsequence(string s1, string s2, int n, int m)
{
    if (m == 0)
    {
        return true;
    }

    if (n == 0)
    {
        return false;
    }

    if (s1[n - 1] == s2[m - 1])
    {
        return subsequence(s1, s2, n - 1, m - 1);
    }

    else
    {
        return subsequence(s1, s2, n - 1, m);
    }
}

int main()
{
    string s1 = "ABCDEF";
    string s2 = "ABC";

    cout << subsequence(s1, s2, 6, 3);

    return 0;
}