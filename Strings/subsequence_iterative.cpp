// Check if string is a subsequencce of other

#include <bits/stdc++.h>
using namespace std;

bool subsequence(string s1, string s2, int n, int m)
{
    int j = 0;

    if (n < m)
    {
        return false;
    }

    for (int i = 0; i < n && i < m; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }

    return (j == m);
}

int main()
{
    string s1 = "ABCDEF";
    string s2 = "XYZ";

    cout << subsequence(s1, s2, 6, 3);

    return 0;
}